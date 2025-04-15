/*

Q). Node* movetofront(Node* head) {
        Node *p, *q;
        if ((head == NULL) || (head -> next == NULL))
            return head;

        q = NULL; p = head;
        while (p -> next != NULL) {
            q = p;
            p = p -> next;
        }
    }
    _____________________________________

    Choose the correct alternative to replace the blank line
    (a) q = NULL; p -> next = head; head = p;
    (b) q -> next = NULL; head = p; p -> next = head;
    (c) head = p; p -> next = q; q -> next = NULL;
    (d) q -> next = NULL; p -> next = head; head = p;

    Ans). (d)

*/