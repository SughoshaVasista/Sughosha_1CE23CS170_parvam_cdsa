#include<stdio.h>
#include<string.h>
int main(){
    int inp,i=1,rev=0;
    printf("Enter a number: ");
    scanf("%d",&inp);
    while(inp!=0){
        //printf("\nIteration %d\n",i);
        rev=(rev*10)+(inp%10);
        //printf("\nmodulus of the number %d is : %d",inp,inp%10);
        printf("\nreverse of the number is: %d\n",rev);
        inp/=10;
        //printf("\ninp of the number is: %d\n",inp);
        i++;
    }
    printf("\nreverse of the number is: %d\n",rev);
    return 0;
}