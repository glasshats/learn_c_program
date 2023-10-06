#include<stdio.h>
int main()
{
        int a = 5; //integer declaration integer=>(whole number)
    //how to print integer value 
        printf("print a value =>%d \n",a);
   
    /*printf is a function its print the value ,“%d” is a format specifier in C programming which act as a placeholder for an integer argument in a formatted input and output statement. 
    “%d” is mainly used with the printf() and scanf() functions, which are used for basic output and input in C*/
    
    //PLAY WITH INTEGER

    //CREAT
        int b = 10;
        printf("print b  value=>%d\n",b);
    //UPDATE
        int c = 8;//c value assigned to b 
        b = c;
        printf("than 'b' value overwrite => %d \n ",b);
    //PLAY WITH ZIG ZAG & MATHAMATHIC 
        int d=50;
        printf("print d value=>%d \n ",d );
        printf("print d value=>%d \n ",d +1 );//d value assign to  50 , try to add one 1 on print function
        printf("print d value=>%d \n ",d -1 );//d value assign to  50 , try to add sub 1  on print function
        printf("print d value=>%d \n ",d *2 );//d value assign to  50 , try to add multiple with  2   on print function
        a = b;
        printf("print a value=>%d \n ",a);
        c = b;
        printf("print c value =>%d \n ",c);
        d = 1+c;
        printf("print d value =>%d \n",d);

}


    
    

    
    


