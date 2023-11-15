#include<stdio.h>
#include<ctype.h>
int main(){
    char is_print[]= "hel\nlo 1244";
    for(int i=0;i<is_print[i];i++)
    {

        if(isgraph(is_print[i])){
            printf("this a printed character : %c\n",is_print[i]);//a-b ,A-B
        }else{
            printf("this a not printed character : %c \n",is_print[i]);// ' ' , \n ,\t  <- non printed character
        }
    }
}