#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct node *link;
struct node
{
	Item item;
	link next;
};
int main()
{
	int i,N,M;
	scanf("%d",&N);
	scanf("%d",&M);
	link t=malloc(sizeof *t);
	link x=t;
	t->item=1;
	t->next=t;
	for(i=2;i<=N;i++)
	{
		x=(x->next=malloc(sizeof (*x)));
		x->item=i;
		x->next=t;
	}
	while(x!=x->next)
	{
		for(i=1;i<M;i++)
			x=x->next;
		printf("%d ",x->next->item);
		x->next=x->next->next;
		N--;
	}
	printf("%d\n",x->item);
	return 0;
}