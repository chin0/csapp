#include <cstdio>

bool is_allset(unsigned x) {
    return !(~x);
}

bool is_allunset(unsigned x) {
    return !x;
}

bool is_lsbset(unsigned x) {
    return !(~x & 0xff);
}

bool is_msgunset(unsigned x) {
    return !(x & 0xff000000);
}

int main(void)
{
    printf("%d\n", is_allset(0xfffffffe));
    printf("%d\n", is_allunset(0xffed));
    printf("%d\n", is_lsbset(0xfffffffe));
}


