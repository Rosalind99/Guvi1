#include<stdio.h>

int isPowerOfTwo(int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
      if (n%2 != 0)
         return 0;
      n = n/2;
  }
  return 1;
}


int main()
{
    int n;
    scanf("%d",&n);
  isPowerOfTwo(n)? printf("yes\n"): printf("no\n");
  return 0;
}
