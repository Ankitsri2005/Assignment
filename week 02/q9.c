// 9. Identity matrix check
#include <stdio.h>

int main() {
    int n, isIdentity = 1;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
                isIdentity = 0;
    if (isIdentity)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
