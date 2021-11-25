#include "wav.h"
#include <stdio.h>
#include <string.h>
#include "g711.h"

#define HEADER_SIZE 44

uint32_t form32(uint8_t *header)
{
    return header[3] <<24 | header[2]<<16 | header[1]<<8 | header[0];
}

uint16_t form16(uint8_t *header)
{
    return header[1]<<8 | header[0];
}

void decodeFormat(wavformat_t *fmt, FILE *fp, uint8_t header[])
{
    //char header[44];
    memset(header, 0, 44);

    fread(header, 1, 44, fp );

    memset((*fmt).chunkID, 0, 4);
    memset((*fmt).format, 0, 4);
    memset((*fmt).Subchunk1ID, 0, 4);
    memset((*fmt).Subchunk2ID, 0, 4);

    memcpy((*fmt).chunkID, (header), 4);
    (*fmt).chunkSize = form32(&header[4]);
    memcpy((*fmt).format, (&header[8]), 4);
    memcpy((*fmt).Subchunk1ID, (&header[12]), 4);
    (*fmt).SubchunkSize1 = form32(&header[16]);
    (*fmt).AudioFormat = form16(&header[20]);
    (*fmt).NumChannels = form16(&header[22]);
    (*fmt).SampleRate = form32(&header[24]);
    (*fmt).ByteRate = form32(&header[28]);
    (*fmt).BlockAlign = form16(&header[32]);
    (*fmt).BitsPerSample = form16(&header[34]);
    memcpy((*fmt).Subchunk2ID, (&header[36]), 4);
    (*fmt).SubchunkSize2 = form32(&header[40]);
    
    printf("chunkID: %s\nchunkSize: %d\n", (*fmt).chunkID, (*fmt).chunkSize);
    printf("format: %s\nSubchunk1ID: %s\n", (*fmt).format, (*fmt).Subchunk1ID);
    printf("SubchunkSize1: %d\nAudioFormat: %d\n", (*fmt).SubchunkSize1, (*fmt).AudioFormat);
    printf("NumChannels: %d\nSampleRate: %d\n", (*fmt).NumChannels, (*fmt).SampleRate);
    printf("ByteRate: %d\nBlockAlign: %d\n", (*fmt).ByteRate, (*fmt).BlockAlign);
    printf("BitsPerSample: %d\nSubchunk2ID: %s\n", (*fmt).BitsPerSample, (*fmt).Subchunk2ID);
    printf("SubchunkSize2: %d\n", (*fmt).SubchunkSize2);
}

void formNewWavHeader(uint8_t header[])
{
    FILE *fp = NULL;
    fp = fopen("newWav.wav", "wb+");

    uint8_t header_new[]={
        0x52, 0x49, 0x46, 0x46, // RIFF
        0xda,0xff, 0x04,0x00, // File size
        0x57, 0x41, 0x56, 0x45, // WAVE
        0x66,0x6d, 0x74,0x20, // FMT
        0x10,0x00, 0x00,0x00, // Length of format data
        0x01,0x00, // Format type -- PCM
        0x01,0x00, // Number of channels 
        0x40,0x1f,0x00,0x00, // Sample rate 8000
        0x00,0x7d,0x00,0x00, // Cumulative data rate 32000
        0x02,0x00, // 16-bit mono, 2 bytes per sample
        0x10,0x00, // 16 bits
        0x64,0x61,0x74,0x61, // "data" 
        0xb6,0xff, 0x04,0x00 // File size
    };
    fwrite(header_new, sizeof(char), 44, fp);
    fclose(fp);
}

void decodeG711ToPCM(FILE* old_fp)
{
    FILE *fp = NULL;
    fp = fopen("newWav.wav", "a");
    fseek(fp, 44, SEEK_SET);
    
    while (1)
    {
        uint8_t byte;
        fread(&byte, sizeof(char), 1, old_fp);
        if (feof(old_fp))
        {
            break;
        }
        
        int val = ulaw_to_pcm(byte);
        fwrite(&val, sizeof(int16_t), 1, fp);
    }
    
    fclose(fp);
}