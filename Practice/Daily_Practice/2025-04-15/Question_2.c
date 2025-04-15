/*

Q). Consider the function defined below.
struct item {
    int data;
    struct item* next;
};
int f(struct item *p) {
    return ((p == NULL) || (p -> next == NULL) || ((p -> data <= p -> next -> data) && f(p -> next)));
}

For a given linkedlist p, the function f returns 1 if and only if 
(a). List is empty or has exactly one element
(b). The elements in the list are sorted in non decreasing order of data value
(c). The elements in the list are sorted in non increasing order of data value
(d). not all elements in the list have the same data value

Ans). (b)

*/