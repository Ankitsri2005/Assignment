/*2. Rotate matrix by 90 degree*/
#include<stdio.h>
int main(){
    int n;
    printf("enter size of matrix :");
    scanf("%d",&n);
    int a[n][n];

    printf("enter matrix elements: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);

        }
    }

    printf("matrix after 90 degree :");
    for(int j=0; j<n; j++){
        for(int i=n-1; i>=0; i--){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

