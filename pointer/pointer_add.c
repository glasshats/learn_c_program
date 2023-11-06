//add the number using string
#include<stdio.h>
int main(){
    int num1 = 56 , num2 = 67;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    printf("ADD USING POINTER --> %d",*ptr1 + *ptr2);

}