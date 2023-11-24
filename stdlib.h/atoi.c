#include<stdio.h>
#include<stdlib.h>
int main(){
    char int_test[]= "78";
    char float_test[]="90.45";
    char long_test[]="898982309020802";
    
    int int_result = atoi(int_test);
    double float_result=atof(float_test);
    long int long_result=atol(long_test);

    printf("int :  %d\n",int_result);
    printf("float : %f\n",float_result);
    printf("long : %ld\n",long_test);
}
The C library function double atof(const char *str) converts the string argument str to a floating-point number (type double).
