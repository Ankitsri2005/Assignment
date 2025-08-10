/*"Insert an element at end of array*/

#include<stdio.h>
int main(){
    int arr[100];
    int num,elements;

    printf("enter the number of elements");
    scanf("%d",&num);

    printf("enter %d elements",num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    printf("enter element to insert at the end");
    scanf("%d",&elements);

    arr[num]=elements;
    num++;

    printf("array insertion");
    for(int i=0; i<num; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
