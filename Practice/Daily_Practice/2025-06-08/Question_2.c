/*

Q). You are given a graph G with 5 vertices {A,B,C,D,E}. The Discovery and Finishing times for each node/vertex after carrrying out DFS are as follows.
      (D,F)    A            B           C            D           E
        1.   (1,2)        (3,5)       (7,8)       (11,12)     (18,20)
        2.   (1,15)       (3,13)      (4,12)      (5,11)      (6,9)
        3.   (1,14)       (2,7)       (16,18)     (19,25)     (21,22)
        4.   (1,16)       (3,11)      (5,10)      (20,25)     (22,23)

Find the number of components and components for each graph.

Ans). (1). 5 components     => {A, B, C, D, E}
      (2). 1 component      => {ABCDE}
      (3). 3 components     => {AB, C, DE}
      (4). 2 components     => {ABC, DE}

*/