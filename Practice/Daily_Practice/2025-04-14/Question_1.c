/*

Q). What does Do() do on a singly linked list
    first --> (NODE1) --> (NODE2) --> (NODE3) --> (NODE4)

    int Do(struct node* p) {
        if (p) return 1 + Do(p -> link);
        else return 0;
    }
    void main() {
        printf("%d", Do(first));
    }

    (a). 1          (b). 2          (c). 3          (d). 4

    Ans). (d)

*/