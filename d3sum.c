#include<stdio.h>
int main(){
    int  n,sum=0,i=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<n){
        sum=sum+n;
        i++;
    }
    printf("sum: %d",sum);
}