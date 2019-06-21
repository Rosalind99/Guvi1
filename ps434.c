#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

    char s[100];
    int l=strlen(s);
    scanf("%s",s);

    for(int i=0;i<l;i++)
    {
        if(i==0 || i%3==0)
            printf("%c",s[i]);

    }
}
