int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2;i<=n;i+=2)
    {
        if(n%i==0)
        printf("%d ",i);
    }
}
