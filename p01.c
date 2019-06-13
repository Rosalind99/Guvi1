#include<stdio.h>
#include<limits.h>
int main()
{
long long int n,k,a[1000],b[1000],max=INT_MIN;
scanf("%lld %lld",&n,&k);


for(long long int i=0;i<n;i++)
{
scanf("%lld",&a[i]);
    if(a[i]>max)
        max=a[i];
}



for(long long int i=0;i<k;i++)
{
    scanf("%lld",&b[i]);
   int t=b[i];
    if(max<t)
    {
    max=t;
    }
    printf("%lld ",max);
}







}

