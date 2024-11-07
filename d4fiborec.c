#include<stdio.h>
int fibon(int n){
    int n1=0,n2=1;
        if(n==0){
            return n;
        }
        else if(n==1){
            return  n;

        }
        return fibon(n-1)+fibon(n-2);
}
int main(){
    int n;
    printf("no of terms:\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("%d ",fibon(i));
    }
    return 0;
}