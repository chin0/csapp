#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    int move = 0xff << (8 * i);
    return ((x & ~move) | b << (8 * i));
}

int main(void) {
    printf("%x\n", replace_byte(0x12345678, 2, 0xAB));
}
