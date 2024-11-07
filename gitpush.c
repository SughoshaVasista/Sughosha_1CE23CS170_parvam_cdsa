#include<stdio.h>
int main(){
   int a=68;
   int c=1;
   int *ptr2=&c;
   int *ptr=&a;
   char b='S';
   char *ptr1=&b;
   printf("value of ptr is :%d\n",a);
    printf("adress ptr is :%u\n",&a);
     printf("ptr is :%u\n",ptr);
      printf("value of ptr is :%d\n",*ptr);
         printf("ptr size is :%d\n",sizeof(*ptr));
          printf("ptr size is :%d\n",sizeof(&a));
            printf("ptr1 size is :%d\n",sizeof(*ptr1));
                printf("ptr1 size is :%d\n",sizeof(&b));

printf("%d\n",*ptr);
}
//
//calcination 