#include<stdio.h>


int main(){

    float f,c;

    printf("Enter the temprature in celcius :");
    scanf("%d",&c);

    f = 1.8*c+32;
    printf("Fehrenhit : %f",f);

    return 0;
}