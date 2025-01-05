#include <stdio.h>

#define MAX_NODES 10

struct Node {
    int data;
    int next;
};

struct Node nodes[MAX_NODES];
int head = -1;
int freeList = 0;

// Function to initialize the nodes array
void initializeList() {
    for (int i = 0; i < MAX_NODES - 1; i++) {
        nodes[i].next = i + 1;
    }
    nodes[MAX_NODES - 1].next = -1;
}

// Function to get a new node from the free list
int getNode() {
    if (freeList == -1) {
        printf("No free nodes available.\n");
        return -1;
    }
    int newNode = freeList;
    freeList = nodes[freeList].next;
    return newNode;
}

// Function to free a node back to the free list
void freeNode(int nodeIndex) {
    nodes[nodeIndex].next = freeList;
    freeList = nodeIndex;
}

void insertAtBeginning(int data) {
    int newNode = getNode();
    if (newNode == -1) return;

    nodes[newNode].data = data;
    nodes[newNode].next = head;
    head = newNode;
}

void insertAtEnd(int data) {
    int newNode = getNode();
    if (newNode == -1) return;

    nodes[newNode].data = data;
    nodes[newNode].next = -1;

    if (head == -1) {
        head = newNode;
    } else {
        int temp = head;
        while (nodes[temp].next != -1) {
            temp = nodes[temp].next;
        }
        nodes[temp].next = newNode;
    }
}

void deleteNode(int data) {
    if (head == -1) {
        printf("List is empty. No nodes to delete.\n");
        return;
    }

    int temp = head;
    int prev = -1;

    if (nodes[temp].data == data) {
        head = nodes[temp].next;
        freeNode(temp);
        return;
    }

    while (temp != -1 && nodes[temp].data != data) {
        prev = temp;
        temp = nodes[temp].next;
    }

    if (temp == -1) {
        printf("Node with value %d not found.\n", data);
        return;
    }

    // Unlink the node and free it
    nodes[prev].next = nodes[temp].next;
    freeNode(temp);
}

void traverseList() {
    if (head == -1) {
        printf("List is empty.\n");
        return;
    }

    int temp = head;
    while (temp != -1) {
        printf("%d -> ", nodes[temp].data);
        temp = nodes[temp].next;
    }
    printf("NULL\n");
}

void freeListMemory() {
    head = -1;
    freeList = 0;
    initializeList();
}

int main() {
    initializeList();

    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    printf("Linked List after insertions at the beginning:\n");
    traverseList();

    insertAtEnd(40);
    insertAtEnd(50);

    printf("Linked List after insertions at the end:\n");
    traverseList();

    deleteNode(20);
    printf("Linked List after deleting node with value 20:\n");
    traverseList();

    freeListMemory();
    printf("Linked List after freeing memory:\n");
    traverseList();

    return 0;
}