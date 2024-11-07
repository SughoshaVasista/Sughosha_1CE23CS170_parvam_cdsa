#include<stdio.h>
int stat(){
    static int i=0;
    printf("%d ",i);
    i++;
}

int main(){
    for (int j=0;j<6;j++){
        stat();
    }
}
