/*Find largest element in array*/


#include<stdio.h>
int main(){
    int arr[100],num;

    printf("enter the number of elements");
    scanf("%d",&num);

    printf("enter %d elements",num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=1; i<num; i++){
        if(arr[i]>max)
        max = arr[i];
    }

    printf("the largest number is : %d\n",max);
    return 0;
}