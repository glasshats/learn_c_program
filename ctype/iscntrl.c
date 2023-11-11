#include<stdio.h>
#include<ctype.h>
int main()
    {
    char character='\n';

    if(iscntrl(character)){
        printf("this is  a  control character\n");
    }else{
        printf("this is not a control character \n");
    }
    
}