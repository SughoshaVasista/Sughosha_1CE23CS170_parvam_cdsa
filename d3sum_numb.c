#include<stdio.h>
int main(){
    int inp,i=1,mod=0;
    printf("Enter a number: ");
    scanf("%d",&inp);
    while(inp!=0){
        mod=mod+(inp%10);
        inp/=10;
    }
    printf("\nsum of the number is: %d\n",mod);
    return 0;
}