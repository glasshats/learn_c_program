#include<stdio.h>
int main(){
    int i,j,space,star,N=5;
    space = N-1;
    star = 1;
    for(i=1;i<2*N;i++){
        //print space 
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<=star;j++){
            printf("*");
            }printf("\n");
        if(i<N){
            space--;
            star++;
        }else{
            space++;
            star--;
        }

    
}
}