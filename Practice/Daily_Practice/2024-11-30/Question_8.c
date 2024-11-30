/*
    if (a > b)
        if (b > c)
            s1;
        else
            s2;

    s2 will be executed if 
    (a) a <= b
    (b) b > c
    (c) b >= c and a <= b
    (d) a > b and b <= c

    Answer - (d)
*/