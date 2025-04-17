/*

Q). Consider the following C program that modifies the list L1. The number of nodes that will be there in L1 after execution of the code sequence is ______.

L1 =  1 -> 7 -> 12 -> 3 -> 9 -> 5 -> 11 -> 15 -> 8 -> NULL
L2 =  1 -> 11 -> 6 -> 9 -> 15 -> 12 -> 4 -> NULL

int find(int query, LIST *list) {
    while (list != NULL) {
        if (list -> data == query) return 1;
        list = list -> next;
    }
    return 0;
}
int main() {
    LIST ptr1 = L1, ptr2 = L2;
    while (ptr1 -> next != NULL) {
        query = ptr1 -> next -> data;
        if (find(query, L2))
            ptr1 -> next = ptr1 -> next -> next;
        else
            ptr1 = ptr1 -> next;
    }
    return 0;
}

Ans). 5

*/