#include <stdio.h>

int solve(unsigned x, unsigned y) {
    return (y & 0xffffff00) | (x & 0xff);
}

int main(void) {
    printf("%x\n", solve(0x89ABCDEF, 0x76543210));
}
