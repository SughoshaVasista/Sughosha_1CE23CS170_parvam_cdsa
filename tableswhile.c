#include<stdio.h>
int main(){
int i=1,n;
printf("Write the no to get its multiplication table: ");
scanf("%d",&n);
while(i<=10){
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
}
return 0;
}