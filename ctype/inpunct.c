#include<stdio.h>
#include<ctype.h>
int main(){
    char a = '2';
    char b='$';
    char c='\t';
    char d = 'r';
    if(ispunct(a)){
        printf("it is punctuation character -- > %c\n",a);

    }else{
        printf("is a not punctuation\n");
    }
    if(ispunct(b)){
        printf("it is punctuation character -- > %c\n",b);

    }else{
        printf("is a not punctuation\n");
    }
    if(ispunct(c)){
        printf("it is punctuation character -- > %c\n",c);

    }else{
        printf("is a not punctuation\n");
    }
    if(ispunct(d)){
        printf("it is punctuation character -- > %c\n",d);

    }else{
        printf("is a not punctuation\n");
    }
}
/*

The C library function int ispunct(int c) checks whether the passed character is a punctuation character. A punctuation character is any graphic character (as in isgraph) that is not alphanumeric (as in isalnum).



*/
