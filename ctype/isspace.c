#include<stdio.h>
#include<ctype.h>
int main(){
    char is_space[]= "hel\nlo 1244";
    /*
   The C library function int isspace(char c) checks whether the passed character is white-space.

Standard white-space characters are −

' '   (0x20)	space (SPC)
'\t'	(0x09)	horizontal tab (TAB)
'\n'	(0x0a)	newline (LF)
'\v'	(0x0b)	vertical tab (VT)
'\f'	(0x0c)	feed (FF)
'\r'	(0x0d)	carriage return (CR)
    
    
    
    */
    for(int i=0;i<is_space[i];i++)
    {

        if(isspace(is_space[i])){
            printf("space occur : %c\n",is_space[i]);
        }else{
            printf("space not occur : %c \n",is_space[i]);
    }
}
}