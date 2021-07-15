#include <stdio.h>

void main()
{

    float g, v, t, s;

    printf("Enter the value of gravitiy : \n");
    scanf("%f", &g);
    printf("Enter the value of time : \n");
    scanf("%f", &t);

    v = g*t;
    printf("The value of velocitiy is :%f",v);

    s = 0.5*g*t*t;
    printf("The value of S is : %f",s);
}