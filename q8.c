#include <stdio.h>
#include<string.h>

int main(void) 
{
char c[100];
scanf("%s",c);

for(int i=0;i<strlen(c);i++)
{
	c[i]+=3;
}
printf("%s",c);


}
