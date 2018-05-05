#include<stdio.h>
#include<stdlib.h>

void binary(int n)
{
    int *a=malloc(sizeof *a);
    int j=0;
    //十进制转换为二进制
    while(n!=0)
    {
        a[j]=n%2;
        j++;
        n=n/2;
    }
    j--;
    for(;j>=0;j--)
        printf("%d",a[j]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    binary(n);
    return 0;
}