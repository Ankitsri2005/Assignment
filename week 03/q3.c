/*3. Delete a node*/
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

void deleteAtPosition(int pos) {
    if (head == -1) return;

    if (pos == 0) {
        head = list[head].next;
        return;
    }

    int i = head;
    for (int count = 0; count < pos - 1 && i != -1; count++) {
        i = list[i].next;
    }

    if (i == -1 || list[i].next == -1) return;

    int temp = list[i].next;
    list[i].next = list[temp].next;
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

    printf("Before deletion: ");
    printList();

    deleteAtPosition(2);

    printf("After deletion: ");
    printList();

    return 0;
}
