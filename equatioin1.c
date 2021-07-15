#include<stdio.h>


void main(){

    int d,u,t,a;

    printf("Enter the value of U:\n");
    scanf("%d",&u);
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of T:\n");
    scanf("%d",&t);

    d = (u*t) + (a*t*t);
    printf("The Value of D is: %d",d);
}