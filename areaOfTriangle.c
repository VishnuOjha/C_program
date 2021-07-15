#include<stdio.h>


int main(){

    int h,b,tarea;

    printf("Enter the value of H : ");
    scanf("%d",&h);
    printf("Enter the value of B : ");
    scanf("%d",&b);

    tarea = h*b*0.5;
    printf("Area of Triangle is :%d",tarea);

    return 0;
}