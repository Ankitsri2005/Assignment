/*5.Check if matrix is sparse*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    int zeroCount = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                zeroCount++;
        }
    }

    if (zeroCount > (m * n) / 2)
        printf("Matrix is Sparse\n");
    else
        printf("Matrix is Not Sparse\n");

    return 0;
}
