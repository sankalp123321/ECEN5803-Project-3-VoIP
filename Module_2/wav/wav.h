#ifndef WAV_H
#define WAV_H

#include <stdio.h>
#include <stdint.h>

struct WAV
{
    char chunkID[4];
    uint32_t chunkSize;
    char format[4];
    char Subchunk1ID[4];
    uint32_t SubchunkSize1;
    uint16_t AudioFormat; 
    uint16_t NumChannels;
    uint32_t SampleRate;
    uint32_t ByteRate;
    uint16_t BlockAlign;
    uint16_t BitsPerSample;
    char Subchunk2ID[4];
    uint32_t SubchunkSize2;
};

typedef struct WAV wavformat_t;

void decodeFormat(wavformat_t *fmt, FILE *fp, uint8_t header[]);
void formNewWavHeader(uint8_t header[]);
void decodeG711ToPCM(FILE* old_fp);

#endif