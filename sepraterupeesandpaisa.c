#include<stdio.h>

void main(){

    float total;
    int p,r;

    printf("Enter the Amount :\n");
    scanf("%f",&total);

    r = total;
    p= (float) (total-r) * 100;

    printf("The Rupees : %d\n",r);
    printf("The Paisa : %d\n",p);
}