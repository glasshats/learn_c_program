#include<stdio.h>
#include<string.h>
//sqare star program in c 
void string_correct_pass();
int main(){
    int cloumn , row , number_row ;


    printf("enter a no.of row's :");
    scanf("%d",&number_row);

    for(cloumn= 1; cloumn <= number_row; cloumn++){
        for(row = 1 ;row <= number_row ; row ++){
            printf("*");
        }
        printf("\n");
    }
    printf("STRING COMPARES \n");
    string_correct_pass();

}
void string_correct_pass(){
    char pass1[10] ,pass[10] = {"password"};
    printf("Enter a password : - > ");
    scanf("%s",pass1);
    if(strcmp(pass,pass1)==0){//The strcmp() compares two strings character by character. If the strings are equal, the function returns 0.
        printf("password is correct !!");
    }else{
        printf("pass is incorrect");
    }
    
    
}
