/*
给出一种物质的分子式（不带括号），求分子量。本题中的分子式值包含4种原子，分别是C，H,O,N，原子量分别为 
12.01,1.008,16.00,14.01（单位g/mol）。例如，C6H5OH的分子量为94.108g/mol 

这种解法有bug 
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
