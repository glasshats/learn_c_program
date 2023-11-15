#include<stdio.h>
int main(){
    int i , j , c;
    c = 1;
    for(i=1;i<5*2;i++){
        for(j=1;j<=c;j++){
            printf("*");
        }
        if(i<5){
            c++;
        }else{
            c--;
        }printf("\n");
    }
    
}