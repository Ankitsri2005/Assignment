/*1. Print matrix in spiral form*/

#include<stdio.h>

void spiralprint(int m ,int n, int a[m][n]) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

       
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

       
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
}

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Spiral print: ");
    spiralprint(3, 3, a);
    return 0;
}
