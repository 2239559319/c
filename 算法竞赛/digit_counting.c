/*
数数字
把前n(n<=10000)个整数顺次写在一起：12345678910111213，数一数0到9各出现了多少次（输出
十个整数，分别是0,1,9出现的次数）

*/
#include<stdio.h>
int b[10]={0};
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		int m=n;
		while(m>0)
		{
			int t=m%10;
			b[t]++;
			m/=10;
		}
		n--;
	}
	for(int i=0;i<=9;i++)
		printf("%d:%d次\n",i,b[i]);
	return 0;
}