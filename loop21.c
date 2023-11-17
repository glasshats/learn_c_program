#include<stdio.h>
int main(){
    int i,j,row,space,star;
    row = 5;
    space =row-1;
    star = 1;
    for(i=1;i<=row*2;i++){
        for(j=1;j<=space;j++){//space print
            printf(" ");
        }
        for(j=1;j<star*2;j++){
            printf("*");

        }
        printf("\n");
        if(i<row){
            space--;
            star++;
        }else{
            space++;
            star--;
        }
    }
}