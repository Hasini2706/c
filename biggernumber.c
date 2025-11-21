#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is biggger");
		}
		else
		{
			printf("%d is bigger");
		}
	}
	else 
	{
		if(b>c)
		{
			printf("%d is bigger");
		}
		else
		{
			printf("%d is bigger");
		}
	}
	return 0;
}
