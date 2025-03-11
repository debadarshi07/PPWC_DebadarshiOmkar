/*

Consider the C program fragment below which is meant to divide x by y using repeated subtractions. The variables x, y, q and r are all unsigned int.

while (r >= y) {
    r = r - y;
    q = q + 1;
}

Which of the following conditions on the three variables x, y, q and r before the execution of the fragment will ensure that the loop terminates in a state satisfying the condition x == (y * q + r) ?

a). (q == r) && (r == 0)
b). (x > 0) && (r == x) && (y > 0)
c). (q == 0) && (r == x) && (y > 0)
d). (q == 0) && (y > 0)

Ans). (c)

*/