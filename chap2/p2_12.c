#include <stdio.h>

int main(void)
{
    int x = 0x87654321;
    printf("%x\n", x & 0xff);
    printf("%x\n", (~x & 0xffffff00) | (x & 0xff));
    printf("%x\n", (x | (~0 & 0xff)));
}
