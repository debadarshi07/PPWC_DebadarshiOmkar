/*

Q). Suppose you are given an array s[1...n] and a procedure reverse(s,i,j) which reverses the order of elements in a between positions i and j(both inclusive). What does the following sequence do, where 1 <= k <= n:
    reverse(s, 1, k);
    reverse(s, k + 1, n);
    reverse(s, 1, n);

    (a). Rotates s left by k positions
    (b). Leaves s unchanged
    (c). Reverses all elements of s
    (d). None of the above 

    Ans). (a)

*/