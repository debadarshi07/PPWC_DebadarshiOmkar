#include <stdio.h>
typedef struct node {
    int data;
    struct node* next;
} node;

struct node* f(struct node *head) {
    struct node* p = NULL, *q = NULL, *temp = head;
    if (!head || !head -> next) return NULL;

    while (temp) {
        q = temp -> next;
        temp -> next = p;
        p = temp;
        temp = q;
    }
    head = p;
    return p;
}

int main() {
    node d = {5, NULL};
    node c = {2, &d};
    node b = {1, &c};
    node a = {7, &b};

}