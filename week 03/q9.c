/*9. Add two numbers represented by linked lists*/
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

int addLists(int h1, int h2) {
    int carry = 0, resultHead = -1;
    while (h1 != -1 || h2 != -1 || carry) {
        int sum = carry;
        if (h1 != -1) { sum += list[h1].data; h1 = list[h1].next; }
        if (h2 != -1) { sum += list[h2].data; h2 = list[h2].next; }
        carry = sum / 10;
        resultHead = insertAtEnd(resultHead, sum % 10);
    }
    return resultHead;
}

void printList(int head) {
    while (head != -1) {
        printf("%d ", list[head].data);
        head = list[head].next;
    }
    printf("\n");
}

int main() {
    int num1 = -1, num2 = -1;
    num1 = insertAtEnd(num1, 2);
    num1 = insertAtEnd(num1, 4);
    num1 = insertAtEnd(num1, 3);

    num2 = insertAtEnd(num2, 5);
    num2 = insertAtEnd(num2, 6);
    num2 = insertAtEnd(num2, 4);

    int sum = addLists(num1, num2);

    printList(sum);

    return 0;
}
