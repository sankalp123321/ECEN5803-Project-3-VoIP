#include "g711.h"
#include <stdint.h>

#define BIAS 33   
#define QMASK 0x0F // quantization mask
#define SEG_MASK 0xF0
#define SIGN_MASK 0x80

int ulaw_to_pcm(unsigned char pcm)
{
    int t = 0;
    uint8_t sign = 0;
    pcm = ~pcm;
    if (pcm & SIGN_MASK)
	{
		pcm &= 0x7F;
        sign = -1;
	}
    uint8_t one_pos = ((pcm & SEG_MASK) >> 4) + 5;
    t = 1 << one_pos;
    t |= ((pcm & QMASK) << (one_pos - 4));
    t |= (1 << (one_pos - 5));
    t = t - BIAS;
    return ((sign == 0) ? (t) : (-(t)));
}