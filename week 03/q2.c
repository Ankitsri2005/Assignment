/*2. Insert in middle of linked list*/
#include <stdio.h>

struct Node {
    int data;
    int next;
};

struct Node list[100];
int head = -1;
int freeIndex = 0;

void insertAtEnd(int data) {
    list[freeIndex].data = data;
    list[freeIndex].next = -1;
    if (head == -1) {
        head = freeIndex;
    } else {
        int i = head;
        while (list[i].next != -1) {
            i = list[i].next;
        }
        list[i].next = freeIndex;
    }
    freeIndex++;
}

void insertAtPosition(int data, int pos) {
    int newNode = freeIndex++;
    list[newNode].data = data;
    if (pos == 0) {
        list[newNode].next = head;
        head = newNode;
        return;
    }
    int i = head;
    for (int count = 0; count < pos - 1 && i != -1; count++) {
        i = list[i].next;
    }
    if (i == -1) return;
    list[newNode].next = list[i].next;
    list[i].next = newNode;
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
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(40);
    insertAtPosition(30, 2);
    printList();
    return 0;
}
