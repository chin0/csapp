#include <stdio.h>
/* Get most significant byte from x */
int get_msb(int x) {
    /* Shift by w-8 */
    int shift_val = (sizeof(int)-1) << 3;
    printf("shift_val: %x\n", shift_val);
    int xright = x >> shift_val;
    printf("xright: %x\n", xright);
    return xright & 0xFF;
}

int main(void) {
    printf("%x\n", get_msb(0x12345678));
}


