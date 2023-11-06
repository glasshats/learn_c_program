// c program pointer creat update initilize

#include<stdio.h>
int main(){
    int a = 78;
    float b =3.4;
    char c ='g';
    printf("a value %d --> address of a value %u\n",a,&a);//format specifier %u to print memory addresses.
    printf("b value %f --> address of b value %u\n",b,&b);
    printf("c value %c --> address of c value %u",c,&c);
}