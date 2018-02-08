#include <string.h>
#include <stdio.h>

int wrong_strlonger(char *s, char *t) {
    return strlen(s) - strlen(t) > 0;
}
/*
A. t가 s보다 작은 길이를 가질때.
B. unsigned(s) - unsigned(t) = unsigned. 이때 t > s라면 underflow가 일어나 오류가남.
*/

int strlonger(char *s, char *t) {
    return (int)(strlen(s) - strlen(t)) > 0;
    //or strlen(s) > strlen(t) !
}

void wrong_case(int (*func)(char*, char*)) {
    printf("=======test=========\n");
    if(func("abcd", "ab"))
        printf("strlen(abcd) > strlen(ab)!\n");
    if(func("ab","affff"))
        printf("strlen(ab) > strlen(affff)???\n");
}
int main() {
    wrong_case(wrong_strlonger); //잘못된 결과
    wrong_case(strlonger);
}

