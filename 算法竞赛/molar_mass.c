/*
����һ�����ʵķ���ʽ���������ţ�����������������еķ���ʽֵ����4��ԭ�ӣ��ֱ���C��H,O,N��ԭ�����ֱ�Ϊ 
12.01,1.008,16.00,14.01����λg/mol�������磬C6H5OH�ķ�����Ϊ94.108g/mol 

���ֽⷨ��bug 
*/ 
#include<stdio.h>
#include<ctype.h>
const double d[]={0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00}; 
int main()
{
	int i,n;
	char s[100];
	char x;
	double sum=0;
	scanf("%s",s);
	x=s[0];
	for(i=0;s[i]!='\0';i++)
	{
		if(isalpha(s[i]))
		{
			x=s[i];
			sum+=d[x-'A'];
		}
		else
		{
			n=s[i]-'0';
			if(isdigit(s[i+1]))
			{
				n=n*10+(s[i+1]-'0');
				i++;
			}
			sum+=d[x-'A']*(n-1);
		}
	}
	printf("%.3f",sum);
	return 0;
}
