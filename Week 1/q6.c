// 6. Add two polynomials
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

    int maxDeg = deg1 > deg2 ? deg1 : deg2;
    int sum[maxDeg+1];

    for (int i = 0; i <= maxDeg; i++) {
        int coeff1 = (i <= deg1) ? poly1[i] : 0;
        int coeff2 = (i <= deg2) ? poly2[i] : 0;
        sum[i] = coeff1 + coeff2;
    }

    printf("Sum of polynomials: ");
    for (int i = 0; i <= maxDeg; i++) {
        printf("%dx^%d", sum[i], maxDeg - i);
        if (i != maxDeg) printf(" + ");
    }
    printf("\n");

    return 0;
}
