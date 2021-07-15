#include<stdio.h>

 void main(){

     int a,i;
     int count=10;
     printf("Enter a number for table: ");
     scanf("%d",&a);

     for (i = 1; i <=count; i++)
     {
         int c = a*i;
         printf("%d x %d = %d\n",a,i,c);
     }
     
 }