/* 
64비트에서는 오버플로우에 상관없이 곱샘을 진행할수있기때문에 곱해준후 32비트로 다시 바꿔서 비교해보면 된다.
 */

int tmult_ok(int x, int y) {
    //캐스팅 안해주면 오버플로우가 날수도있음. 그러므로 명시적으로 형변환을 해줘서 sign extension을 해주자.
    long long pll = (long long) x * y;

    return pll == (int)pll;
}
