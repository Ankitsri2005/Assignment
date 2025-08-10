/*4. Transpose of matrix*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose of matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
