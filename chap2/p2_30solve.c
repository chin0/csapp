int tadd_ok(int x, int y) {
    if(x < 0 && y < 0)
        return x + y < 0;
    else if (x >= 0 && y >= 0)
        return x + y >= 0;
    else
        return 1;
}

int tadd_ok_book_solution(int x,int y) {
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >= 0 && y >= 0 && sum < 0;
    return !neg_over && !pos_over;
}
