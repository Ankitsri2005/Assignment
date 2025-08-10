#include<stdio.h>
int main () {
    int arr[100],freq[100];
    int count = 1,n;
    printf("enter elements: ");
    scanf("%d",&n);

    printf("enter %d elements",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;


    }

    for(int i=0; i<n; i++){
        if(freq[i] != 0){
            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            freq[i] = count;
        }

        
    }
    printf("frequency of each elements");
    for(int i=0; i<n; i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }





    return 0;
}
