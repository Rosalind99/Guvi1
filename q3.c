#include <stdio.h>
#include<string.h>

int main(void) 
{
char s[100];
scanf("%s",s);

for(int i=0;i<strlen(s);i+=2)
{
	char c=s[i];
	s[i]=s[i+1];
	s[i+1]=c;
}
printf("%s",s);
}
