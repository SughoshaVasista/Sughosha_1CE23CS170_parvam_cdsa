#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=50;i++){
        if(i==0){
            printf("%d\n",i);
        }
        else if(i%18==0){
            printf("%d-King for a reason!\n",i);
        }
         else if(i%7==0){
            printf("%d-Thala for a reason!\n",i);
            
        }
        else if(i%10==0){
            printf("%d-GOAT for a reason!\n",i);
            
        }
        else if(i%17==0){
            printf("%d-Mr 360,take a bow!\n",i);
        }
        // else if(i%12==0){
        //     printf("%d-Batman(me) for a reason!\n",i);
        // }
        // else if(i%8==0){
        //     printf("%d-Vidya for a reason!\n",i);
        // }
        // else if(i%3==0){
        //     printf("%d-Sushmitha for a reason!\n",i);
        // }
        else{
            printf("%d\n",i);
        }
    }

    return 0;        
}