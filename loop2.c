#include<stdio.h>
int main(){
    int i , j ,rows;
    printf("enter a number of rows :- >");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows ;j++)
        {
            if(i == 1 || i == rows ||j == 1 || j== rows){
                printf("*");
            
            }else {
                printf(" ");
             }
        }
        printf("\n");
    }
}
//day 2