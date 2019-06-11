#include<stdio.h>

int main()
{
	int a[1000],n,k,j=1;
	scanf("%d%d",&n,&k);
	
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	while(j<=k)
	{
		int t=a[n-1];
		for(int i=n-1;i>=0;i--)
		{
			a[i]=a[i-1];
			
		}
		a[0]=t;
		j++;
	}
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	
	
}
