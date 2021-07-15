#include <stdio.h>
#include <string.h>


void parse(char *str){
    // initializing in, index =0
    int in=0;
    int index=0;

    // using for loop for iteration
    for(int i=0;i<strlen(str);i++){ 

        //checking if sign mee then inisde the sign and continue
        if(str[i]== '<'){
            in=1;
            continue;
        }

        //if sign meet then outside of the sign and continue
        else if(str[i]== '>'){
            in=0;
            continue;
        }

        // checking if in=o, then copy the value of i into index
        if(in==0){
            str[index] = str[i];
            index++;
        }
       
    }   
    // after completing string then terimination
     str[index]='\0';


    // left shift the string after removing whitspace from begning
     while(str[0] == ' '){
         for(int i=0;i<strlen(str);i++){
             str[i] = str[i+1];
         }
     }

    //removing whitpaces from ending g
     while(str[strlen(str)-1] == ' '){
         str[strlen(str)-1]='\0';
     }



}



int main(){

    char str[] = "<p>            Hello Folks                 </p>";
    printf("String before the parsing : %s\n",str);
    parse(str);
    printf("String after the parsing ~~%s~~",str);
}