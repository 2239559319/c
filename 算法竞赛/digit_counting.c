/*
������
��ǰn(n<=10000)������˳��д��һ��12345678910111213����һ��0��9�������˶��ٴΣ����
ʮ���������ֱ���0,1,9���ֵĴ�����

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
		printf("%d:%d��\n",i,b[i]);
	return 0;
}