#include <stdio.h>

int show_short(short *x) {
    char *a = (char*)x;
    for(int i = 0; i < sizeof(*x); i++) {
        printf("%hhx ", (char*)a[i]);
    }
    printf("\n");
}


int show_long(long *x) {
    char *a = (char*)x;
    for(int i = 0; i < sizeof(*x); i++) {
        printf("%hhx ", (char*)a[i]);
    }
    printf("\n");
}

int show_double(double *x) {
    char *a = (char*)x;
    for(int i = 0; i < sizeof(*x); i++) {
        printf("%hhx ", (char*)a[i]);
    }
    printf("\n");
}

int main() {
    short a = 0x5262;
    long b = 0xdeadbeefe0e1;
    double c = 3.14;

    show_short(&a);
    show_long(&b);
    show_double(&c);
}

