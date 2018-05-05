#include <stdio.h>

void prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        prime(i);
    printf("\n");
    return 0;
}