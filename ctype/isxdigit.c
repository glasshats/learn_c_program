#include<stdio.h>
#include <ctype.h>
   int main () {
   char var1[] = "tz";
   char var2[] = "0xE";
  
   if( isxdigit(var1[0]) ) {
      printf("%s hexadecimal character\n", var1 );
   } else {
      printf("%s is not hexadecimal character\n", var1 );
   }
   
   if( isxdigit(var2[0] )) {
      printf("%s is hexadecimal character\n", var2 );
   } else {
      printf("%s is not hexadecimal character\n", var2 );
   }
}//The C library function int isxdigit(int c) checks whether the passed character is a hexadecimal digit.
//As we know, there are 16 digits in the hexadecimal number system, represented from 0 to 9 same as decimals, but after that, it starts with an alphabetical representation of preceding numbers such as A, B, C, D and E. Let us see the conversion of ‘hex’ into other number systems.