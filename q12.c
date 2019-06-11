#include<stdio.h>

int main()
{
	char s[1000];
	gets(s);
	
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			for(int j=i;j<strlen(s)-1;j++)
			{
				s[j]=s[j+1];
			}
			s[strlen(s)-1]='\0';
		}
	}
	printf("%s",s);
}
