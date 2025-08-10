/*8. Reverse linked list*/
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

void reverseList() {
    int prev = -1, curr = head, next;
    while (curr != -1) {
        next = list[curr].next;
        list[curr].next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
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
    insertAtEnd(30);
    insertAtEnd(40);

    reverseList();

    printList();

    return 0;
}
