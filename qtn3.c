#include <stdio.h>
#include<ctype.h>
int main(void) {

char c;

scanf("%c",&c);

if(!isalpha(c))
printf("invalid");

else
{
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel");
    else
        printf("Consonant");
}

	
	

}
