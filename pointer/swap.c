#include<stdio.h>
void SWAPING(int *num1,int *num2){
    int normal;
    normal = *num1;
    *num1 = *num2;
    *num2 = normal;
    printf("after swaping [FUNCTION]:num1 value : %d \n",*num1);
    printf("after swaping [FUNCTION]:num2 value : %d \n",*num2);
}
int main(){
    int num1 =50 ,num2=60;
    printf("before swaping the number\n");
    printf("NUMBER 1 : %d \n",num1);
    printf("NUMBER 2 : %d \n",num2);
    SWAPING(&num1,&num2);
    printf("after swaping [main] : num1 value : %d \n",num1);
    printf("after swaping [main] : num2 value : %d \n",num2);
}