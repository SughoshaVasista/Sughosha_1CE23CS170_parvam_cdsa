//fibonacci
/*0 1 1 2 3 5 8.....*/
#include<stdio.h>
int main(){
    int fibo=0;
    int n,n1=0,n2=1;
    int i=0;
    printf("fibonacci for terms:\n");
    scanf("%d",&n);
    while(i<=n){
        if(i==0){
            printf("%d ",fibo);
        }
        fibo=n1+n2;
        n2=n1;
        n1=fibo;
        printf("%d ",fibo);
        i++;
    }
     
}