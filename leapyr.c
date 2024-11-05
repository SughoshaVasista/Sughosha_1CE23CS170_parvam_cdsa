#include<stdio.h>
int main(){
    int a;
   printf("\nWrite any year to find its leap year or not: ");
   scanf("%d",&a);
   if(a%100!=0 || a%400==0){                                    //condition: YEAR SHLD NOT BE DIVISIBLE BY 100
    if(a%4==0 ){                                                // SHLD BE DIVISIBLE BY 4 AND 400
        printf("\n%d- Its a leap year!!\n",a);
    }
    else{
        printf("\n%d-Its not a leap year!!\n",a);
    }
   }
else{
   printf("%d- Its  not a leap year!!",a);
}
return 0;
}
//if((a%4==0 && a%100!=0) || (a%400==0))
//ternary code :
// DATA_TYPE var_name = (a>b) ? a:b;