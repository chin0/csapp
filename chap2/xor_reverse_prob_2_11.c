#include <stdio.h>

void xor_swap(int *a, int *b) {
    *b = *a ^ *b;
    *a = *a ^ *b;
    *b = *a ^ *b;
}
    
void reverse_array(int a[], int cnt) {
    int first, last;
    for(first = 0, last = cnt-1;
            first < last;
            first++, last--)
        xor_swap(&a[first], &a[last]);
}

int main() {
    int a[4] = {1,2,3,4};
    reverse_array(a,4);
    for(int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
