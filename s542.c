#include <stdio.h>

int main()
{
 int n,a[1000];
 scanf("%d",&n);
 
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);

int f=0;

for(int i=0;i<n-1;i++)
{
    if(a[i]>a[i+1])
    f=1;
}

if(f==0)
printf("yes");
else
printf("no");

    return 0;
}
