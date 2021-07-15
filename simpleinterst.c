#include<stdio.h>


int main(){

    int p,r,n,interest;

    printf("Enter the value of P :");
    scanf("%d",&p);
    printf("Enter the value of R :");
    scanf("%d",&r);
    printf("Enter the value of N :");
    scanf("%d",&n);

    interest = (p*r*n)/100;
    printf("The Interset is : %d",interest);

    return 0;
}