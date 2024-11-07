#include<stdio.h>
int main(){
   int a,b,sum;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
   add(a,b);
   return 0;

}
int add(int a ,int b){
        int c=a+b;
        printf("sum:%d",c);
    }