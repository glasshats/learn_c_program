#include<stdio.h>
int main(){
    int i,j;
    for(i = 0; i<5;i++){
        for(j=0;j<5 - i;j++){
            printf(" ");//print  space
        }
        for(j=1;j<7;j++){
            printf("*");//print a star after space
        }
       printf("\n"); 
    }
}
/*output:


     ******
    ******
   ******
  ******
 ******



*/