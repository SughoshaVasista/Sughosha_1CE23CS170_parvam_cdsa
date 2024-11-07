#include<stdio.h>

float area_rect(float l,float w){
        float area=l*w;
        printf("area:%f",area);
        return  area;

}

int main(){
    float l,w;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the width: ");
    scanf("%f",&w);
    area_rect(l,w);
    return 0;
}