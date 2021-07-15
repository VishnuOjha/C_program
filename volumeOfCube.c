#include<stdio.h>


int main(){

    int l,b,h,volume;
    
    printf("Enter the value of L : ");
    scanf("%d",&l);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    printf("Enter the value of H : ");
    scanf("%d",&h);

    volume = l*b*h;
    printf("Volume of Cube is : %d",volume);


    return 0;
}