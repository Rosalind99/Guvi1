#include <stdio.h>
#include<string.h>

int main(void) 
{
char s[100],t;
int cnt[126]={0},max=0;
gets(s);
for(int i=0;i<strlen(s);i++){
cnt[s[i]]++;
if(cnt[s[i]]>max)
{
	max=cnt[s[i]];
	t=s[i];
}
}
printf("%c",t);



}
