#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "correct way to  learn  c program";
    char str1[] = "correct Mentor_gopikrishna brother";
    char *result;
    // char ch = 'w';
    // result = memchr(str,ch,15); <--this way also correct
    result = memchr(str,'w',strlen(str));
    //memchr :: search a character in a memory block    
    if(result != NULL){
        printf("w is founded in str position at %ld \n",result - str +1);
        // output :: w is founded in str position at 9 
        //printf("w is founded in str position at %ld \n",result - str );
        //output :: w is founded in str position at 8 . 1.(why return 8 ?)
    }else{
        printf("not found \n ");
    }

    //memcmp :: compare to memory block
    if(memcmp(str,str1,7)==0){
        printf("str = %s is equal to str1 = %s\n",str,str1);
        //output :: str = correct way to  learn  c program is equal to str1 =  correct Mentor_gopikrishna brother
        // 2.(how its possible ?)
    }else{
        printf("NOT equal ");
    }

    // memcpy :: memory copy 
    //memcpy() doesn’t check for overflow or \0
    char str2[10];
    memcpy(str2,str,5);
    printf("str2 - >copy string %s\n ",str2);

    // memmove :: copy with over lap
    memmove(str2,str,7);
    printf("memmove str2 %s \n ",str2);
    //Both memcpy and memove do similar things.
    //But to sight out one difference:3.(what is that one difference?)    


    //memset::memset() is used to fill a block of memory with a particular value.
    memset(str,'?',6);
    printf("memset : %s",str);  

    //strcat :: Concatenate strings(add to string)
    char str3[]=" yes its correct",str4[]=" hello! world";
    strcat(str3,str4);
    printf("\n strcat : Concatenated string: %s ",str3); 


    // strncat: Concatenate a specific number of characters
    char str5[]="accept ",str6[]="accept feel pain";
    strncat(str5,str6,5);
    printf("\n strncat : string concatenated : %s \n",str5);
    
     // strchr: Find the first occurrence of a character
     char ch = 'w';
    char *find = strchr(str,ch);
    printf("strchr : \n");
    if(find!=NULL){
        printf("w is finded in str \n");
    }else{
        printf("not found");
    }
    //4.what is difference between strchr and memchr(strchr vs memchr)

    // strcmp: Compare two strings
    int str_cmp = strcmp(str5,str6);
    printf("strcmp:\n");
    if(str_cmp == 0){
        printf("str5 and str6 both are same\n ");
    }else{
        printf("str5 and str6 not same \n");
    }

    // strncmp: Compare a specific number of characters
    printf("strncmp:\n");
    int strn_cmp = strncmp(str5,str6,5);
    if(strn_cmp == 0){
        printf("str5 and str5 both are same \n");
    }
    else{
        printf("str5 and str5 is not equal \n");

    }
    //5.what is differ between strcmp,strncmp,memcmp  ?

    // strcoll: Compare two strings using the current locale
    printf("strcoll: \n ");
    char str7[]="hello",str8[]="Hello";
    int result_ = strcoll(str7,str8);
    if(result_ < 0 ){
        printf("str7 greater than str8 \n");
    }else if(result_ > 0){
        printf("str7 less than str8 \n");
    }else{
        printf("both are equal \n");
    }

    //strcpy :: copy string
    char str9[10];
    printf("strcpy : before copy string %s \n", str9);
    strcpy(str9,str8);
    printf("strcpy : after copy string %s \n ",str9);


    //strncpy :: Copy a specific number of characters

    char str10[10];
    printf("strncpy : before copy string %s \n", str10);
    strncpy(str10,str9,3);
    printf("strncpy : after copy string %s \n ",str10);
    //6.what is difference between strcpy,strncpy,memcpy?

   // strcspn :: Find the length of the initial segment not containing specified characters
   char str11[]="hello!world,";
   int cspn_len = strcspn(str11, " !");//its like python slice
    printf("strcspn: Length of initial segment without '!': %d\n", cspn_len);

    //strerror: Get string describing error code
    int a = 0;
    if(a==0){
    printf("strerror: Error message for code 41 : %s\n", strerror(41));//  7.  how many error for strerroe()function ?
    }else{
        printf("error :: ");
    }
    
    //strlen :: get the string length
    printf("strlen: length of string --> %ld \n",strlen(str11));

    // strpbrk: Find the first occurrence of any character from a set
    char *s_tr;
    s_tr = strpbrk(str11,"!");
    if(str != NULL){
        printf("special symbol '!' finded in str11 : %s \n",s_tr); 
    }else {
        printf("not find");
    }


    // strrchr: Find the last occurrence of a character


    char *st_r = strrchr(str11, 'o');
    if (st_r != NULL) {
        printf("strrchr: Last 'o' found at position %ld\n", s_tr - str11);
    } else {
        printf("strrchr: 'o' not found.\n");
        //8. what is differ between memchr strrchr ?

    }
    // strspn: Find the length of the initial segment containing only specified characters
    char str12[] = "hello!world";
    size_t spn_len = strspn(str12, "Helo, Wrd!");
    printf("strspn: Length of initial segment with 'Helo, Wrd!': %lu\n", spn_len);
    

    // strstr: Find the first occurrence of a substring
    char *res;
    res = strstr(str12,"hello");
    if(res!=NULL){
        printf("ststr: 'hello ' is founded ");
    }else{
        printf("strstr: not found");
    }printf("\n");
    


    // strtok: Tokenize a string
    char input[] = "name1,name2,name3";
    char *token = strtok(input, ",");
    while (token != NULL){
        printf("strtok: name: %s\n", token);
        token = strtok(NULL, ",");
    }



    // strxfrm: Transform a string to compare using strcoll
    char str13[50];
    size_t xfrm_len = strxfrm(str13, str12, 15);
    printf("strxfrm: Transformed string: %s\n", str13);

    //9.how many function in string.h
    //10.find the missing function ? and write the function with explain ?
}



/*
3. refer this link 
            https://stackoverflow.com/questions/4415910/memcpy-vs-memmove/77358065#77358065

4.refer this link
            https://stackoverflow.com/questions/4260109/differences-between-memchr-and-strchr?answertab=modifieddesc#tab-top

5.strcmp():
It is used to compare the two string stored in two variable,
 It takes some time to compare them. And so it slows down the process.

strncmp():
It is very much similar to the previous one, but in this one, 
it compares the first n number of characters alone. 
This also slows down the process.

memcmp():
This function is used compare two variables using their memory. 
It doesn't compare them one by one, It compares four characters at one time.
 If your program is too concerned about speed, I recommend using memcmp()

 6.refer this link
    https://github.com/glasshats/learn_c_program/blob/main/strcpy_vs_memcpy.c

7.refer this link:
    https://github.com/glasshats/learn_c_program/blob/main/string_strerror.c

8.refer this link
    https://stackoverflow.com/questions/4260109/differences-between-memchr-and-strchr

9.  

    22 function in string.h





*/


