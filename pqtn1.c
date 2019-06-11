#include <stdio.h>
#include<string.h>

int main(void) 
{
char s[100];
scanf("%s",s);
int l=strlen(s);

for(int i=0,j=l-1;i<j;i++,j--)
{
	char c=s[i];
	s[i]=s[j];
	s[j]=c;
}
printf("%s",s);
}
