#include <stdio.h>

char bit_compare(int x, int y) {
    if(x ^ y) 
        return 0;
    else
        return 1;
}

int main() {
    int a = 10, b = 20;
    if(bit_compare(a,b)) {
        printf("same!\n");
    } else {
        printf("not same!\n");
    }
    return 0;
}
