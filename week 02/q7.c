// 7. Multiply two polynomials
#include <stdio.h>

int main() {
    int deg1, deg2;
    printf("Enter degree of first polynomial: ");
    scanf("%d", &deg1);
    int poly1[deg1+1];
    printf("Enter coefficients from highest degree to constant term:\n");
    for (int i = 0; i <= deg1; i++)
        scanf("%d", &poly1[i]);

    printf("Enter degree of second polynomial: ");
    scanf("%d", &deg2);
    int poly2[deg2+1];
    printf("Enter coefficients from highest degree to constant term:\n");
    for (int i = 0; i <= deg2; i++)
        scanf("%d", &poly2[i]);

    int resultDeg = deg1 + deg2;
    int result[resultDeg + 1];

    for (int i = 0; i <= resultDeg; i++)
        result[i] = 0;

    for (int i = 0; i <= deg1; i++) {
        for (int j = 0; j <= deg2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }

    printf("Product of polynomials: ");
    for (int i = 0; i <= resultDeg; i++) {
        printf("%dx^%d", result[i], resultDeg - i);
        if (i != resultDeg) printf(" + ");
    }
    printf("\n");

    return 0;
}

