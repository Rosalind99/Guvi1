#include <stdio.h>
#include<string.h>

int main(void) 
{
long long int s=0,r,n;
scanf("%lld",&n);
while(n!=0)
{
	r=n%10;
	s=s+(r*r);
	n=n/10;
}
printf("%lld",s);
}
