#include <stdio.h>
#include "wav.h"


int main()
{
    FILE *fp;
    fp = fopen("A_eng_f5.wav", "rb");
    if(fp == NULL)
    {
        printf("Error openening the file.\n");
    }

    wavformat_t fmt;
    decodeFormat(&fmt, fp);
    fclose(fp);
}