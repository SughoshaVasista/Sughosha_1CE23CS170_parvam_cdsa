#include<stdio.h>
int main(){
    int fac=1,n,i=1;
    printf("Enter a number to find it`s factorial: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative number doesn't exist\n");
    }
    else{
        while(i<=n){
            fac=fac*i;
            i++;
            }
    printf("the factorial is: %d",fac);
    }
}