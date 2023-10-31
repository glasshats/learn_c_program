#include<stdio.h>
#include<string.h>


int main()
{//The C library function void *memmove(void *str1, const void *str2, size_t n) copies n characters from destination2 to source1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().
    char source[20] = "source code";
    char destination[20] = "destination code";
    printf("before move des '%s'  \n sou '%s'  \n",source,destination);
    memmove(destination,source,10);
    printf("after move des '%s' \n sou '%s' \n",source,destination);
}