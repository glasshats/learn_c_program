#include<stdio.h>
#include<string.h>

int main()
{
char str1[] = "hello world red ";
char str2[] = "hello world car";
int length_str1, length_str2 ,lenght , r ; 
length_str1 = strlen(str1);
length_str2 = strlen(str2);

lenght = length_str1 < length_str2 ? length_str1 : length_str2; 

r = memcmp(str1,str2,lenght);
//  ^ 
//  | 
// The C library function int memcmp(const void *str1, const void *str2, size_t n)) compares the first n bytes of memory area str1 and memory area str2.
if(r == 0){
    printf("first %d no of character  are equal to  str1 and str2 ",lenght);
}else{
    printf("first %d no of character  are not  equal to  str1 and str2 ",lenght);
}

}