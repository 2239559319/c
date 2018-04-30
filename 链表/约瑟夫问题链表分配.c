#include<stdio.h>
#include"list.h"
int main()
{
    int i,N,M;
    scanf("%d%d",&N,&M);
    Node t,x;
    initNodes(N);
    for(i=2,x=newNode(1);i<=N;i++)
    {
        t=newNode(i);
        insertNext(x,t);
        x=t;
    }
    while(x!=Next(x))
    {
        for(i=1;i<M;i++)
            x=Next(x);
        freeNode(deleteNext(x));
    }
    printf("%d\n",Item(x));
}