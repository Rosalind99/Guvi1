#include<stdio.h>
int main()
{
long long int n;
int k,r,c=0;
scanf("%lld",&n);
scanf("%d",&k);
while(n!=0)
{
    r=n%10;
    if(r==k)
        c++;
    n=n/10;

}

printf("%d",c);
}
