//핵심은 biasing을 어떻게 할까?이다. 이는 arithmetic right shift의 특성으로 해결한다.
int div32(int x) {
    //Negative면 arithmetic 시프트의 효과로 1로 꽉차 0xF(15)가 될것임.
    int bias = (x >> 31) & 0xF;
    return (x + bias) >> 4;
}
