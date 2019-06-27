#include<stdio.h>
#include<string.h>

int main()
{
char s[100];
scanf("%s",s);
int k,t=0,l=strlen(s);
scanf("%d",&k);
while(t<k)
{
    char c=s[l-1];
for(int i=l-1;i>=0;i--)
{
    s[i+1]=s[i];
}
s[0]=c;
t++;
}
s[l]='\0';
printf("%s",s);
}
