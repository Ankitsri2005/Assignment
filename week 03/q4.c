/*4. Search in linked list*/
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

int search(int key) {
    int i = head;
    while (i != -1) {
        if (list[i].data == key)
            return 1;
        i = list[i].next;
    }
    return 0;
}

int main() {
    insertAtEnd(5);
    insertAtEnd(10);
    insertAtEnd(15);

    int key = 10;
    if (search(key))
        printf("Found\n");
    else
        printf("Not Found\n");

    key = 20;
    if (search(key))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}
