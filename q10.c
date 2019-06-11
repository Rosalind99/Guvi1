#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) 
{
char s[100];
int i;
scanf("%s",s);

for(i=0;i<strlen(s);i++)
{
	if(isalpha(s[i]))
	{
	printf("no");
	break;
	}
}

if(i==strlen(s))
printf("yes");
}
