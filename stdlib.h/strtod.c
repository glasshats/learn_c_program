#include<stdio.h>
#include<stdlib.h>
int main(){
char str[]="238978566 this is a string";
char *ptr;
double ret;
ret =strtod(str,&ptr);
printf("the number is %lf\n",ret);
printf("string part is{ %s }\n",ptr);
}

