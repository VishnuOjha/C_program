#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
   char * opertion;
   int num1, num2;

   opertion = argv[1];
   num1 = atoi(argv[2]);
   num2 = atoi(argv[3]);

   printf("The Operation is %s\n",opertion);
   printf("The Operation is %d\n",num1);
   printf("The Operation is %d\n",num2);

    if(strcmp(opertion,"add")==0){
        printf("%d",num1 + num2);
    }
    else if(strcmp(opertion,"sub")==0){
        printf("%d",num1 - num2);
    }
    else if(strcmp(opertion,"mul")==0){
        printf("%d",num1 * num2);
    }
    else if(strcmp(opertion,"division")==0){
        printf("%d\n\n",num1 / num2);
    }

    else{
        printf("please enter valid choice!!!");
    }
    
    return 0;
}
