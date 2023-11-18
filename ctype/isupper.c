//This function returns a non-zero value(true) if c is an uppercase alphabetic letter else, zero (false).

#include<stdio.h>
#include<ctype.h>
int main(){
    char a = 'M';
    char b='$';
    char c='\t';
    char d = 'n';
    if(isupper(a)){
        printf("it is uppercase character -- > %c\n",a);

    }else{
        printf("it is not uppercase character\n");
    }
    if(isupper(b)){
        printf("it is uppercase character -- > %c\n",b);

    }else{
        printf("it is not uppercase character\n");
    }
    if(isupper(c)){
        printf("it is  uppercase character -- > %c\n",c);

    }else{
        printf("it is not uppercase character\n");
    }
    if(isupper(d)){
        printf("it is uppercase character -- > %c\n",d);

    }else{
        printf("it is not uppercase character\n");
    }
}