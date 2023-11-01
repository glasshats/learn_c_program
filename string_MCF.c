//MCF  = most commonly used function
#include<stdio.h>
#include<string.h>
char str1[10]= "akatsuki",str2[10] = "coder";
int result;
int main(){
    // 1.  string length
    printf("string leanth of str1 = %ld\n",strlen(str1));
    // 2. string copy
    strcpy(str2,str1);
    printf("str1 %s  - > copy to str2 %s \n",str1,str2);
    //3.String concatenation
    strcat(str1,str2);
    printf("String concatenation %s \n",str1);
    //4. String comparison
    result = (strcmp(str1,str2)  == 0);
    if(result = 0){
        printf("both are same");
    }else if(result <0){
        printf("str1 less than str2 -- > %ld \n ",strlen(str1));
    }else{
        printf("str1 greater than str2 --> %ld \n",strlen(str2));
    }
    //5.string search
    char string[10] = "coader";
    result = strstr(str2,string);
    printf("string search - >");
    if(result != NULL){
        printf("%s found in %s \n",string,str2);
    }else{
        printf("not fount");
    }





}