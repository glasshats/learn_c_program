#include<stdio.h>
#include<ctype.h>
int main(){
    char is_graph[]= "hel\nlo 1244";
    for(int i=0;i<is_graph[i];i++)
    {

        if(isgraph(is_graph[i])){
            printf("this a graphical character : %c\n",is_graph[i]);//a-z,A-Z,0-9 <-graphical char
        }else{
            printf("this a not graphical character : %c \n",is_graph[i]);// ' ' , \n ,\t  <- non graphical char
        }
    }
}
/*
The C library function int isgraph(int c) checks if the character has graphical representation.

The characters with graphical representations are all those characters that can be printed except for whitespace characters (like ' '), which is not considered as isgraph characters
*/