// What will happen when the function convert is called with any positive integer n as argument ?
void convert(int n) {
    if (n < 0)
        printf("%d ", n);
    else {
        convert(n / 2);
        printf("%d", n % 2);
    }
}

/*
    Answer: It won't print anything and won't terminate.
    because the base case will never be satisfied, so function call stack will never get chance to be popped.
*/