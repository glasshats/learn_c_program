#include<stdio.h>
#include<ctype.h>
int main(){
    char is_digit[]= "hello1234";
    for(int i=0;i<is_digit[i];i++)
    {

        if(isdigit(is_digit[i])){
            printf("this is  a binary digit : %c\n",is_digit[i]);
        }else{
            printf("not binary digit : %c \n",is_digit[i]);
        }
    }
}
/*
output
not binary digit : h 
not binary digit : e 
not binary digit : l 
not binary digit : l 
not binary digit : o 
this is  a binary digit : 1
this is  a binary digit : 2
this is  a binary digit : 3
this is  a binary digit : 4



*/