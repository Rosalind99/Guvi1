#include<stdio.h>
#include<string.h>

int main()
{
char s[100],c[100];
scanf("%s",s);
scanf("%s",c);
if(strstr(s,c)!=NULL)
{
printf("yes");
}
else
    printf("no");

}
