/*

Q). The following C function takes a single linkedlist of integers as a parameter and rearranges the element of the list containing the integers 1, 2, 3, 4, 5, 6, 7 in the given order. What will be the contents of the list after the function completes execution ?
    struct node {
        int value;
        struct node* next;
    }
    void rearrange(struct node* list) {
        int temp;
        if (!list || !(list -> next)) return;
        p = list; q = list -> next;
        while (q) {
            temp = p -> value;
            p -> value = q -> value;
            q -> value = temp;
            p = q -> next;
            if (p) q = p -> next else q = 0;
        }
    }

    (a). 1,2,3,4,5,6,7
    (b). 2,1,4,3,6,5,7
    (c). 1,3,2,5,4,7,6
    (d). 2,3,4,5,6,7,1

    Ans). (b)

*/