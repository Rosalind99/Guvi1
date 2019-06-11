#include <stdio.h>
#include<string.h>

int main(void) 
{
char s[100];
scanf("%s",s);
int l=strlen(s);
s[l]='.';
printf("%s",s);
}
