#include <stdio.h>
#include<string.h>

int main(void) 
{
int n,t,rev=0,r;
scanf("%d",&n);
t=n;

while(t)
{
	r=t%10;
	rev=10*rev+r;
	t=t/10;
}
printf("%d",rev);
}
