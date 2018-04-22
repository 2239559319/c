#include"list_stack.h"
#include<stdio.h>
int main()
{
	link a;
	STACKinit(1);
	STACKpush(1);
	STACKpush(4);
	printf("%d\n",STACKpop());
	printf("%d\n",STACKpop());
	return 0;
}