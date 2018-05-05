#include<stdio.h>

int function(int m)
{
    int sum=0;
    while(m/5!=0)
    {
        sum+=m/5;
        m/=5;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",function(n));
    return 0;
}