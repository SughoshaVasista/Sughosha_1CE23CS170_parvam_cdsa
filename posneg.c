#include<stdio.h>
int main(){
        int i;
        printf("write a number: ");
        scanf("%d",&i);
        if(i%2==0){
            printf("even\n",i);
        }
        else if(i==0){
            printf("\n",i);
        }
         
        else{
            printf("odd\n");
        }
    return 0;   
}     