/*

In the implementation of queue using two stacks, if 50 Enqueue operation and 2 Dequeue operation performed. If total no. of PUSH is X and total no. of POP is Y, then X + Y is ______.

Ans). 50 Enqueue = 50 PUSH
      1st Dequeue = 99 PUSH and 100 POP

      After 1st round, no of elements will decrease by 1 because one element will be printed.

      2nd Dequeue = 97 PUSH and 98 POP

      Total PUSH(X) = 50 + 99 + 97 = 246
      Total POP(Y) = 100 + 98 = 198

      X + Y = 246 + 198 = 444

*/