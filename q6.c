#include <stdio.h>
#include<string.h>

int main(void) 
{
char s[100],n[100];
scanf("%s",s);
int t=strlen(s);
int j=0;
for(int i=t-1;i>=0;i--)
{
	if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')
	{n[j]=s[i];
	
	j++;
	}
}
printf("%s",n);
}
