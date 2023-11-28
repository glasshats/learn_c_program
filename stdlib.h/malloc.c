#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char* str = (char *) malloc(27);
    strcpy(str,"dynaminc memory allocation");
    printf("string: %s \n address : %u ",str,str);
    
}
/* 
The C library function void *malloc(size_t size) allocates the requested memory and returns a pointer to it.
Return Value:
This function returns a pointer to the allocated memory, or NULL if the request fails.*/