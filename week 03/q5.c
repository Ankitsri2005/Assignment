/*5. Nth node from end*/
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

void nthFromEnd(int n) {
    int len = 0;
    int i = head;
    while (i != -1) {
        len++;
        i = list[i].next;
    }
    if (n > len || n <= 0) {
        printf("Invalid position\n");
        return;
    }
    int target = len - n;
    i = head;
    for (int j = 0; j < target; j++) {
        i = list[i].next;
    }
    printf("Nth node from end: %d\n", list[i].data);
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    nthFromEnd(2); // Should print 40
    nthFromEnd(5); // Should print 10
    nthFromEnd(6); // Invalid
    return 0;
}
