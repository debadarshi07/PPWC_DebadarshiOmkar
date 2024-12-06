int recursive(int n) {
    if (n == 1) return 1;
    else return (recursive(n - 1) + recursive(n - 1));
}

/*
    The time complexity of the following C function is
    (a) O(n)
    (b) O(n logn)
    (c) O(n^2)
    (d) O(2^n)
    Answer: (d) O(2^n)
*/