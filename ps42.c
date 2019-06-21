#include<stdio.h>
#include <stdlib.h>

int main()
{

    int n,a[100],k,f=0;
    scanf("%d%d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==k)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("No");
    else
        printf("Yes");

}
