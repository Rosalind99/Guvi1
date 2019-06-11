#include <stdio.h>
#include<string.h>

int main(void) 
{
int s=0,r,n;
scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	s=s+(r*r);
	n=n/10;
}
printf("%d",s);
}
