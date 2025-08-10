/*6. Detect loop in linked list*/
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

int detectLoop() {
    int slow = head, fast = head;
    while (fast != -1 && list[fast].next != -1) {
        slow = list[slow].next;
        fast = list[list[fast].next].next;
        if (slow == fast) {
            return 1; // Loop detected
        }
    }
    return 0; // No loop
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    list[3].next = 1; // Create a loop (40 -> 20)

    if (detectLoop())
        printf("Loop detected\n");
    else
        printf("No loop\n");

    return 0;
}
