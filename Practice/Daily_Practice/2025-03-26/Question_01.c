/*

Q). Let A be a square matrix size n x n. Consider the following pseudocode. What is the expected output? 
    C = 100
    for i = 1 to n do
        for j = 1 to n do
        {
            Temp = A[i][j] + C;
            A[i][j] = A[j][i];
            A[j][i] = Temp - C;
        }
        for i = 1 to n do
            for j = 1 to n do
                output (A[i][j]);

(A) The matrix A itself
(B) Tarnspose of the matrix A
(C) Adding 100 to the upper diagonal elements and subtracting 100 from lower diagonal elements of A
(D) None of these

Ans). (A)

*/