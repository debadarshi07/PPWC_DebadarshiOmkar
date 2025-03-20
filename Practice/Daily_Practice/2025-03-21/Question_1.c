/*

Q). Given 3D array A[1...100][1...100][1...100] with Base Address = 1000 and size of each element is 2B. Find the address of A[50][49][50] ?

Ans). Address of A[50][49][50] = 
        1000 + [((50 - 1) * 100 * 100) + ((49 - 1) * 100) + (50 - 1)] * 2
        = 1000 + [490000 + 4800 + 49] * 2
        = 1000 + (494849 * 2)
        = 1000 + 989698
        = 990698

*/