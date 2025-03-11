/*

The following function computes X^Y for positive integers X and Y.

    int exp(int X, int Y) {
        int res = 1, a = X, b = Y;
        while (b != 0) {
            if (b % 2 == 0) {
                a = a * a;
                b = b / 2;
            } else {
                res = res * a;
                b = b - 1;
            }
        }
        return res;
    }

    Which of the following conditions is TRUE before every iteration of the loop ? 
    a). X^Y = a^b                   b). (res)
    c). X^Y = res * a^b             d). X^Y = (res * a)^b

    Ans). (c)

*/