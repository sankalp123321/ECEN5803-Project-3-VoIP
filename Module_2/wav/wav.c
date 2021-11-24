#include "wav.h"
#include <stdio.h>
#include <string.h>

#define HEADER_SIZE 44

uint32_t form32(uint8_t *header)
{
    return header[3] <<24 | header[2]<<16 | header[1]<<8 | header[0];
}

uint16_t form16(uint8_t *header)
{
    return header[1]<<8 | header[0];
}

void decodeFormat(wavformat_t *fmt, FILE *fp)
{
    char header[44];
    memset(header, 0, sizeof(header));

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