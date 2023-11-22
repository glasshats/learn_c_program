#include<stdio.h>
#include<ctype.h>
int main(){
	int i,j;
	char character[]="sridharanitharan";//This function converts lowercase letters to uppercase.
	char s[]="SRIDHARANITHARAN";
	printf("sridharanitharan toupper() this function converts lowercase letters to uppercase: ->");
	while(character[i]){
		
		printf("%c",toupper(character[i]));
		i++;
		}printf("\n");
	printf("SRIDHARANITHARAN  tolower() This function converts uppercase letters to lowercase: ->");
	while(s[j]){
		printf("%c",tolower(s[j]));
		j++;
		}
}
