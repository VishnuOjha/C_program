#include<stdio.h>
#include<string.h>

struct tg
{
    char driverName[30];
    char dlNo[30];
    char route[30];
    int kms[30];
};


int main(){

    struct tg d1,d2,d3;

    printf("Please enter the information of driver : \n");
    printf("********************************************************************************************");
    printf("First Driver's information : \n");
    printf("Name : \n");
    scanf("%s",&d1.driverName);
    printf("DLno : \n");
    scanf("%s",&d1.dlNo);
    printf("Route : \n");
    scanf("%s",&d1.route);
    printf("Kms : \2");
    scanf("%d",&d1.kms);
printf("********************************************************************************************");
    printf("Secon Driver's information : \n");
    printf("Name : \n");
    scanf("%s",&d2.driverName);
    printf("DLno : \n");
    scanf("%s",&d2.dlNo);
    printf("Route : \n");
    scanf("%s",&d2.route);
    printf("Kms : \n");
    scanf("%d",&d2.kms);
printf("********************************************************************************************");
    printf("Third Driver's information : \n");
    printf("Name : \n");
    scanf("%s",&d3.driverName);
    printf("DLno : \n");
    scanf("%s",&d3.dlNo);
    printf("Route : \n");
    scanf("%s",&d3.route);
    printf("Kms : \n");
    scanf("%d",&d3.kms);
    
printf("****************Printing All the information of Drivers******************************");
printf("********************************************************************************************");

printf("First Driver's Information ");
printf("%s\n",d1.driverName);
printf("%s\n",d1.dlNo);
printf("%s\n",d1.route);
printf("%d\n",d1.kms);

printf("********************************************************************************************");

printf("Second Driver's Information ");
printf("%s\n",d2.driverName);
printf("%s\n",d2.dlNo);
printf("%s\n",d2.route);
printf("%d\n",d2.kms);


printf("********************************************************************************************");

printf("Third Driver's Information ");
printf("%s\n",d3.driverName);
printf("%s\n",d3.dlNo);
printf("%s\n",d3.route);
printf("%d\n",d3.kms);

    return 0;
}