#include<stdio.h>
int main(){
    int fac=1,n,i;
    printf("Enter a number to find it`s factorial: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative number doesn't exist");
    }
    else{
        for(i=1;i<=n;i++){
            fac=fac*i;
            }
    }
    printf("the factorial is: %d",fac);
}