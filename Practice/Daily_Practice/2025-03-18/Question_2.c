/*

Consider A[1...50][1...25]. Base Address = 100, size = 2B.
If address of A[10][15] in RMO is x and in column major order is y and no of rows is z, then y - x + z = ?

Ans). x = 100 + (((10 - 1) * (25 - 1 + 1)) + (15 - 1)) * 2 = 578
      y = 100 + (((15 - 1) * (50 - 1 + 1)) + (10 - 1)) * 2 = 1518
      z = 50 - 1 + 1 = 50

      y - x + z = 990

*/