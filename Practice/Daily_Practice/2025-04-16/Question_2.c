/*

Q). What is the output of the program if the list contains 1 -> 2 -> 3 ?
    HP is global variable
    void DoSomething() {
        node *q, *r, *s;
        q = HP;
        r = NULL;
        while (q != NULL) {
            s = r;
            r = q;
            q = q -> link;
            r -> link = s;
        }
        HP = r;
    }

    (a). 2 -> 1 -> 3
    (b). 3 -> 2 -> 1
    (c). 1 -> 3 -> 2
    (d). 2 -> 3 -> 1

    Ans). (b)

*/