#include <stdio.h>
#include "wav.h"


int main()
{
    uint8_t header[44];
    formNewWavHeader(header);
    FILE *fp = NULL;
    fp = fopen("Au8A_eng_f5.wav", "rb");
    if(fp == NULL)
    {
        printf("Error openening the file.\n");
    }

    decodeG711ToPCM(fp);
    fclose(fp);
}