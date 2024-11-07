#include<stdio.h>
int main(){
   int a,b,sum;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
   sum=add(a,b);
   printf("Sum of two numbers is: %d",sum);
   return 0;

}
int add(int a ,int b){
        int c=a+b;
        return c;
    }