// 8. Dynamic array operations
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int **seqList = (int **)malloc(n * sizeof(int *));
    int *sizes = (int *)calloc(n, sizeof(int));
    int lastAnswer = 0;

    for (int i = 0; i < n; i++)
        seqList[i] = NULL;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            sizes[idx]++;
            seqList[idx] = (int *)realloc(seqList[idx], sizes[idx] * sizeof(int));
            seqList[idx][sizes[idx] - 1] = y;
        } else if (type == 2) {
            lastAnswer = seqList[idx][y % sizes[idx]];
            printf("%d\n", lastAnswer);
        }
    }

    for (int i = 0; i < n; i++)
        free(seqList[i]);
    free(seqList);
    free(sizes);

    return 0;
}
