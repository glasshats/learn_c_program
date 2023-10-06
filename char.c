#include<stdio.h>
int main(){
 char a ='b'; //singal character can be assigned tha variable because char is 1  byte data type
 printf("charater data type size of a = > %d ",sizeof(a));
 printf(" charater a  is %c \n",a);
 /*printf is a function its print the value ,“%c” is a format specifier in C programming which act as a placeholder for an integer argument in a formatted input and output statement. 
    “%c” is mainly used with the printf() and scanf() functions, which are used for basic output and input in C*/

// PLAY WITH CHARACTER..
char z = 'c';
a=z;
printf(" character c assigned to z than z is assigned to 'a' . already variable of 'a'  stored in b than z is overwrite the 'a' variable \n",a);

//ASCII (American Standard Code for Information Interchange)/..
char ascii = 'A';
char g = 'a' ;
printf("ascii value of capital letter A = > %d \n ",ascii); //%d is print a interger value of capital /A/ than print a ascii key value 
printf("ascii value of small letter  a = > %d \n",g);

}