/*
这个代码产生0~999之间的的N个随机数
*/
#include<stdlib.h>
#include <stdio.h>

typedef struct node *link;
struct node{int item;link next;};
struct node heada,headb;
link t,u,x,a=&heada,b;
int main()
{
    int N,i;
    for(i=0,t=a;i<N;i++)
    {
        t->next=malloc(sizeof *t);
        t=t->next;
        t->next=NULL;
        t->item=rand()%1000;
    }
    b=&headb;
    b->next=NULL;
    for(t=a->next;t!=NULL;t=u)
    {
        u=t->next;
        for(x=b;x->next!=NULL;x=x->next)
            if(x->next->item>t->item)
                break;
        t->next=x->next;
        x->next=t;
    }
}