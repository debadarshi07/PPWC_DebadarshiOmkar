/*
Which of the three functions are likely to cause problems with pointers ?
    P1
    int *g(void) {
        int x = 10;
        return &x;
    }

    P2
    int *g(void) {
        int *px;
        *px = 10;
        return px;
    }

    P3
    int *g(void) {
        int *px;
        px = (int *)malloc(sizeof(int));
        *px = 10;
        return px;
    }

    (a) only P3
    (b) only P1 and P3
    (c) only P1 and P2
    (d) P1, P2, P3

    Answer - (c) only P1 and P2
*/