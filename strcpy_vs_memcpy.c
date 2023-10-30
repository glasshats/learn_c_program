
#include<stdio.h>
#include<string.h>
void string_copy();
void strcpy_vs_memcpy();
int main(){

    printf("MEMCPY\n");
    char source[12]="akatsuki";
    char destination[] = "programmer\0";
    printf("before memcpy source  : - > %s \n ",source);
    //memcpy() doesn’t check for overflow or \0
    memcpy(source,destination,sizeof(char)*10);//the memcpy function copies the specified number of bytes from one memory location to the other memory location regardless of the type of data stored.
    printf("after  memcpy source : - > %s\n",source);
    printf("STRING COPY \n");
    string_copy();
    printf("STRINGCOPY VS MEMCPY \n ");
    strcpy_vs_memcpy();
   

}
void string_copy(){
    char source[20] = "string";
    char destination[20] = "string_copyed";
    printf("before string  source- > %s \n ",source);
    strcpy(source,destination);
    printf("after string  source -  > %s\n",destination);
}
void strcpy_vs_memcpy(){
    char source[5] = {'h','i','\0','g','o'};
    char memcopy[5];
    char stringcopy[5];
    memcpy(memcopy,source,5);////memcpy() doesn’t check for overflow or \0
    strcpy(stringcopy,source);
    printf("memcpy\n");
    for(int i = 0; i<5; i++){
        printf("%d = %c \n",i,memcopy[i]);
    }
    printf("strcpy\n");
    for(int j = 0; j <5 ; j++){
        printf("%d = %c \n",j,stringcopy[j]);
    }
}
//day 4 /
    
