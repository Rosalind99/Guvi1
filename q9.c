#include <stdio.h>
#include<string.h>

int main(void) 
{
int i,n1,n2;
scanf("%d%d",&n1,&n2);

for(i=n1;n1>=1;i--)
{
	if(n1%i==0 && n2%i==0)
	break;
}
printf("%d",i);

}
