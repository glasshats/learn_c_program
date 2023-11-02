#include<stdio.h>
#include<string.h>
int main(){
    char string[30];
    strcpy(string,"your name of internet");
    memset(string,'-',8);
    printf("%s",string);
}
