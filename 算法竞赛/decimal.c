/*
������������n<m<10^6,���1/N^2+����1/m^2,����5λС��
��������������ݣ��������Ϊn=m=0;
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