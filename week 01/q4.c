/*Move all zeros to end*/

#include<stdio.h>

    void moveZero(int arr[],int n) {
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                arr[count++] = arr[i];
            }

        }
        while(count<n){
            arr[count++] = 0;
        }
        

    }

    int main() {

        int arr[100],n;
         printf("enter the number of elements");
         scanf("%d",&n);

         printf("enter %d elements");
         for(int i=0; i<n; i++){

         scanf("%d", &arr[i]);
         }

         moveZero(arr,n);

         printf("new array");
         for(int i=0; i<n; i++){
            printf("%d",arr[i]);
         }



    return 0;
}