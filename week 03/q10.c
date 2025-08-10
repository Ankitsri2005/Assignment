/*10. Print elements of linked list*/
#include <stdio.h>

struct Node {
    int data;
    int next;
};

struct Node list[100];
int freeIndex = 0;

int createNode(int data) {
    list[freeIndex].data = data;
    list[freeIndex].next = -1;
    return freeIndex++;
}

int insertAtEnd(int head, int data) {
    int newNode = createNode(data);
    if (head == -1) return newNode;
    int i = head;
    while (list[i].next != -1) i = list[i].next;
    list[i].next = newNode;
    return head;
}

void printLinkedList(int head) {
    int temp = head;
    while (temp != -1) {
        printf("%d\n", list[temp].data);
        temp = list[temp].next;
    }
}

int main() {
    int head = -1;
    head = insertAtEnd(head, 16);
    head = insertAtEnd(head, 13);
    head = insertAtEnd(head, 7);

    printLinkedList(head);
    return 0;
}
