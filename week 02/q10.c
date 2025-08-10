// 10. Count zeros in matrix
#include <stdio.h>

int main() {
    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                count++;
        }
    printf("%d\n", count);
    return 0;
}
