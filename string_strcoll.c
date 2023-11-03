#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Power";
    char str2[] = "power";
    
    int result = strcoll(str1,str2);
    if(result < 0){
        printf("str1 greater than str2");
    }else if(result>0){
        printf("str1 less than str2");
    }else{
        printf("both are same");
    }
}