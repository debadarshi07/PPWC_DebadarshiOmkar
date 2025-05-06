/*

Q). Consider the following C-code
    void foo(int n) {
        int a = 1;
        if (n == 1)
            return;
        for (a = 1; a <= n; a++) {
            printf("GATE");
            break;
        }
    }

What is the worst case time complexity of above program ?
(a). O(1)       (b). O(n)       (c). O(logn)        (d). O(√n)

Ans). (a)

*/