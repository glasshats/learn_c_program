#include<stdio.h>
#include<string.h>
int main(){
    char s[] = "thisa write way";
    char d[] = "sihta";
    int len= strspn(s,d);//The C library function size_t strspn(const char *s, const char *d) calculates the length of the initial segment of s which consists entirely of characters in d .
    printf("length of initial segment matching  %d " ,len);
    
}