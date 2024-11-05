#include<stdio.h>
int main(){
/*
    %d for decimals
    %o for octal
    %x for lowercase hexadecimal 
    %X for  uppercase hexadecimal 
                                    */
    int a=10;
    float b=12.5;
    char f='f';
    char F='F';
    char str[]="hello!";
    char s[]="Batman";
    printf("%s\n",str);
    printf("%f\n",b);
    printf("%d\n",a);
    printf("%o\n",a);
    printf("%x\n",f);
    printf("%X\n",F);
    printf("I am %10s",s);
    printf("\nI am %-10s and i am vengence",s);
    return 0;
}
