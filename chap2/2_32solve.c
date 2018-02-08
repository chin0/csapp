#include <stdio.h>
#include <limits.h>

int tadd_ok(int x,int y) {
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >= 0 && y >= 0 && sum < 0;
    return !neg_over && !pos_over;
}

//buggy code
int tsub_ok(int x, int y) {
    return tadd_ok(x, -y);
}
/*
 * 풀이: Int의 최솟값을 y에넣고 x에 음수를 넣으면 잘못된값이 나온다. 실제로 (-1) -INT_MIN는 오버플로우가 일어나지 않는다. 하지만 INT_MIN을 음수로 바꿔도 음수가 나오기때문에 tadd_ok에서 두 수가 음수인 경우를 검사하게 되고 이게 참이되서 의도치 않은 결과가 나온다.
*/

int main() {
    printf("%d %d %x\n", INT_MIN, -INT_MIN, INT_MIN);
    printf("%d\n", -1 - INT_MIN);
    if(tsub_ok(-1 ,INT_MIN)) {
        printf("ok!\n");
    }
}



