#include <stdio.h>
#include<string.h>

int main(void) 
{
int i,n1,n2;
scanf("%d%d",&n1,&n2);

for(i=n2;n2<10000;i++)
{
	if(i%n1==0 && i%n2==0)
	break;
}
printf("%d",i);

}
