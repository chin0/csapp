#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main() {
    int x = 10;
    int y = 20;
    inplace_swap(&x,&y);
    printf("%d %d\n",x,y);
}
