#include<stdio.h>
int main(){
    int a=10;
    int b=12;
    int c=10;
    if(a==c){
        printf("equal!");
    }
    else{
        printf("not equal!");
    }
    if(a>b){
        printf("\na is greater than b");
    }
    else{
        printf("\nb is greater than a");
    }
    if(a=b){
        printf("\na is not equal to b");
    }
    else{
        printf("\na and b are equal");
    }
    return 0;
}