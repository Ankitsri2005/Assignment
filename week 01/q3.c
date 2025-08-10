/*Find second largest element*/
#include<stdio.h>
int main(){
    int arr[100], num,max,second;

    printf("enter the number of elements");
    scanf("%d",&num);

    if(num<2){
    printf("need atleast 2 elements");
    return 0;
    }

    printf("enter %d elements",num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1]){
        int max=arr[0];
        int second = arr[1];
    }
    else{
        max = arr[1];
        second = arr[0];
    }

    for(int i=2; i<num; i++){
        if(arr[i]>max){
            second = max;
            max = arr[i];
        }
        else if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
    }

    if(max==second){
        printf("not distinct");
    }
    else{
        printf("the second largest elements is : %d",second);

    }
return 0;
}