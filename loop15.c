#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<i;j++){
            printf(" ");//print a space
        }
        for(j=i;j<=5;j++){
            if(j==i||j==5||i==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
}
}