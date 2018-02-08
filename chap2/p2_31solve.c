/* Determine whether arguments can be added without overflow */
/* Warning: This code is buggy. */
int tadd_ok(int x, int y) {
    int sum = x+y;
    return (sum-x == y) && (sum-y == x);
}

/*
풀이: 모듈러 덧셈은 아벨군을 이루므로 오버플로우에 상관없이 sum-x = (x+y)-x=y가 연산되고 sum-y = (x+y)-y == x가 연산되므로 항상 어느경우든 참이다.
*/
