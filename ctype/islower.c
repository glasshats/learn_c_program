#include<stdio.h>
#include<ctype.h>
int main(){
    char array[]={'h','/0','t','H','O','l','Y'};//lower character id a-z
    if(islower(array[0])){
        printf("its lower character %c\n",array[0]);
    }else{
        printf("its not lower character\n");
    }
    
    if(islower(array[1])){
        printf("its lower character %c\n",array[1]);
    }else{
        printf("its not lower character\n");
    }
    
    if(islower(array[3])){
        printf("its lower character %c\n",array[3]);
    }else{
        printf("its not lower character\n");
    }
}