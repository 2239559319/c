/*
输入两个整数n<m<10^6,输出1/N^2+……1/m^2,保留5位小数
输入包含多组数据，结束标记为n=m=0;
*/
#include<stdio.h>
int main()
{
	long long int n,m;
	while(scanf("%lld%lld",&n,&m)==2&&m&&n)
	{
		double sum=0;
		for(long long int i=n;i<=m;i++)
		{
			sum+=1.0/(i*i);
		}
		printf("%.5lf\n",sum);
	}
	return 0;
}