//The C library function void *calloc(size_t nitems, size_t size) allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.



#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
int *a;
printf("number of element to enter :");
scanf("%d",&n);
a=(int*)calloc(n,sizeof(int));
printf("enter a %d element n \n",n);
for(i=0;i<n;i++){
    scanf("%d\n",&a[i]);
}
for(i=0;i<n;i++){
    printf("%d -> ",a[i]);

}
free(a);
}