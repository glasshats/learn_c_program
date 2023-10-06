#include<stdio.h>
int main()
{
        float a = 5.1; //float  declaration float =>(number with decimal)
    //how to print float  value 
        printf("print a value =>%f \n",a);
    //float value also assigning to integer
   
    /*printf is a function its print the value ,“%f” is a format specifier in C programming which act as a placeholder for an integer argument in a formatted input and output statement. 
    “%f” is mainly used with the printf() and scanf() functions, which are used for basic output and input in C*/
    
    //PLAY WITH INTEGER

    //CREAT
        float b = 10.5;
        printf("print b  value=>%f\n",b);
    //UPDATE
        float c = 8;//c value assigned to b 
        b = c;
        printf("than 'b' value overwrite => %f \n ",b);
    //PLAY WITH ZIG ZAG & MATHAMATHIC 
        float  d=50;
        printf("print d value=>%f \n ",d );
        printf("print d value=>%f \n ",d +1.5 );//d value assign to  50 , try to add one 1 on print function
        printf("print d value=>%f \n ",d - 5.3);//d value assign to  50 , try to add sub 1  on print function
        printf("print d value=>%f \n ",d *2.5 );//d value assign to  50 , try to add multiple with  2   on print function
        a = b;
        printf("print a value=>%f \n ",a);
        c = b;
        printf("print c value =>%f \n ",c);
        d = 1+c;
        printf("print d value =>%f \n",d);

}

