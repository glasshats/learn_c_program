#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char s[]="java script";
    for(int i=0;i<s[i];i++){
        printf("array index[%d]-->: %c \t",i,(s[i]));
        if(isalnum(s[i])){
            printf("this a alphanumeric");
        }else{
            printf("not a alphanumeric");  
        }printf("\n");
    }
    
}
