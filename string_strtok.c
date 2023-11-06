#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "this_is_a_correct_way_to_learn_c_program";
    char d[] = "_";
    char *line = strtok(s,d);//The C library function char *strtok(char *s, const char d) breaks string str into a series of tokens using the delimiter d
    while(line != NULL){
        printf(" %s \n",line);
        line = strtok(NULL , d);
    }



    /*
    
 this 
 is 
 a 
 correct 
 way 
 to 
 learn 
 c 
 program     
    */


}