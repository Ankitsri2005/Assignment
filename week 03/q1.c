/*1. Linked list insertion*/
#include <stdio.h>

struct Node {
    int data;
    int next;
};

struct Node list[100];
int head = -1;
int freeIndex = 0;

void insert(int data) {
    list[freeIndex].data = data;
    list[freeIndex].next = head;
    head = freeIndex;
    freeIndex++;
}

void printList() {
    int i = head;
    while (i != -1) {
        printf("%d ", list[i].data);
        i = list[i].next;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    printList();
    return 0;
}
