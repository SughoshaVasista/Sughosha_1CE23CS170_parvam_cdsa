#include<stdio.h>
#include<string.h>
int main(){
    int inp,i=1,rev=0,temp;
    printf("Enter a number to check if it's a palindrome or not: ");
    scanf("%d",&inp);
    temp=inp;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp/=10;
     }
     printf("reverse is: %d\n",rev);
    if(inp==rev){
        printf("It's a palindrome!");
    }
    else{
        printf("It's not a palindrome!");
    }
    return 0;
}