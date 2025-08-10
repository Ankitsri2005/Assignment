/*Check if array is sorted*/

#include<stdio.h>
int isSorted(int arr[],int n){
    for(int i=0; i<n-1; i++){
    if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;

}


int main () {

    int arr[100],n;
    printf("enter the number of elements :");
    scanf("%d",&n);

    printf("enter %d elements:",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    if(isSorted(arr,n))
        printf("sorted ");
    
    else
        printf("not sorted");
    

    return 0;
} 
