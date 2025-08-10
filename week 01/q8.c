#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int len,ispalindrome=1;

    printf("enter your string: ");
    scanf("%s",&str);

    len = strlen(str);

    for(int i = 0; i<len/2; i++){
        if(str[i]!=str[len-i-1]){
            ispalindrome = 0;
            break;
        }
    }
    if(ispalindrome)
    printf("the string is palindrome");
    else{
        printf("not palindrome ");
    }
    



    return 0;
} 