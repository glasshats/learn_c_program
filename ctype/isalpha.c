#include<stdio.h>
#include<ctype.h>
int main(){
    
    //The C library function int isalpha(int c) checks if the passed character is alphabetic.
    
    char alpha[]="ruthless^420";
    for(int i=0;i<alpha[i];i++){
        printf("isalpha --> %c \t ",alpha[i]);
        if(isalpha(alpha[i])){
            printf("its a alphabet -- > %c",alpha[i]);
        }else{
            printf("not alpha");
        }printf("\n");   
}
}