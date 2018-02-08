#include <stdio.h>

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;
    
    //틀린코드
    //for(i = 0; i <= length-1; i++) //int와 unsigned의 비교는 명시해주지 않으면 int가 unsigned형으로 변환되어 비교됨. length에 0을 넣으면 legnth는 -1이 되는데 이는 unsigned로 0xffffffff로 매우 큰값이 되어 오류가남.
    for(i = 0; i <= (int)length-1; i++)
        result += a[i];
    return result;
}

int main() {
    float a[5] = {1.2,3.4,2.1,4.2,5};

    printf("%f\n",sum_elements(a,0));
}


