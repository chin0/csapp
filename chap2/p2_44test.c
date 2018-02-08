#include <stdio.h>

int main() {
    int a = 1;
    if((a & 7) != 7) {
        printf("(%d & 7) != 7!\n",a);
    }
    if((a << 29) < 0) {
        printf("(%d << 29) < 0 (%d)\n", a, a<<29);
    }
    a = 0xc000;
    if((a * a) < 0) {
        printf("(%d * %d) < 0(%d)\n", a,a,a*a);
    }

}
    
