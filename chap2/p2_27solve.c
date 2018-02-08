#include <stdio.h>

int uadd_ok(unsigned x, unsigned y) {
    return (x + y) >= x;
}

int main() {
    unsigned x = 3221225472;
    unsigned y = 1073741824;
    if(uadd_ok(x,y)) {
        printf("overflow!!!\n");
    }
}
