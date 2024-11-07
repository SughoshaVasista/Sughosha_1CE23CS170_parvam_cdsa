#include<stdio.h>
int main(){
   add();
   return 0;

}
int add(){
        int a,b;
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        int c=a+b;
        printf("sum:%d",c);
    }