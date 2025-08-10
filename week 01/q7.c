/*Reverse a string*/

#include<stdio.h>
#include<string.h>
 int main() {
    int len,full,night;
    char str[100],temp;
    
    printf("enter a string: ");
    scanf("%s",&str);


      len = strlen(str);

  


    for(int i=0; i<len/2; i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        
    }
    printf("reversed string:%s\n",str);



    return 0;
 } 



