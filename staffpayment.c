#include<stdio.h>


void main(){

    float net,gross,deduct,basic,hra,da,medical,pf,insurance;

    printf("Enter your net Salary:\n");
    scanf("%f",&basic);
    
    da = 0.5*basic;
    hra = 0.1*basic;
    medical = 0.04*basic;
    gross = basic + da + hra +medical;
    printf("The gross salary is : %f",gross);
    pf = 0.05*gross;
    insurance = 0.07*gross;
    deduct = insurance+pf;
    net = gross - deduct;
    printf("The net salary is : %f",net);


}