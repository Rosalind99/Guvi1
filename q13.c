#include<stdio.h>

int main()
{
	int n,a[10],c[10]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	c[a[i]]++;
	
	for(int i=0;i<10;i++)
	{
		if(c[i]==1)
		{
			printf("%d",i);
		}
	}
}
