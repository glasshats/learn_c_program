#include<stdio.h>
#include<string.h>
int main(){
const char data[] = "akatsuki_coader";
const char search = '_';
char *rst;
rst  = memchr(data , search ,strlen(data));
//      ^
//      |
// The C library function void *memchr(const void *str, int c, size_t n) searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument data.
if(rst != NULL){
 printf("%s",rst);
}else{
    printf("this type of character not inside the string");
}
}
//day 2 


