/*7. Remove loop*/
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

void removeLoop() {
    int slow = head, fast = head;
    int loopFound = 0;

    while (fast != -1 && list[fast].next != -1) {
        slow = list[slow].next;
        fast = list[list[fast].next].next;
        if (slow == fast) {
            loopFound = 1;
            break;
        }
    }

    if (!loopFound) return;

    slow = head;
    int prev = -1;
    while (slow != fast) {
        prev = fast;
        slow = list[slow].next;
        fast = list[fast].next;
    }

    if (prev != -1)
        list[prev].next = -1; 
}

void printList() {
    int i = head, count = 0;
    while (i != -1 && count < 100) { 
        printf("%d ", list[i].data);
        i = list[i].next;
        count++;
    }
    printf("\n");
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    list[3].next = 1; 

    removeLoop();

    printList();

    return 0;
}
