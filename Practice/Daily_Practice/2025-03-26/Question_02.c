/*

Q). Suppose you are given an array s[1...n] and a procedure reverse (s, i, j) which reverses the order of elements in a between positions i and j (both inclusive). What does the following sequence do, where 1 ≤ k ≤ n: 
    reverse (s, 1, k);
    reverse (s, k + 1, n);
    reverse (s, 1, n);

(A) Rotates s left by k positions
(B) Leaves s unchanged
(C) Reverses all elements of s
(D) None of the above

Ans). (A)

*/