/*

Q). If the list contains the value 1 -> 2 -> 3, then no. of times print statement will execute is _____.
    void fun(Node *ptr) {
        if (ptr) {
            fun (ptr -> link);
            printf("%d", ptr -> data);
            fun(ptr -> link);
            return;
        }
    }

    Ans). 7

*/