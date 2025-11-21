#include<stdio.h>
int main()
{
	int n,sum,rem;
	scanf("%d",&n);
	while(n>0)
	{
		int rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	int factors(int m)
{
	int count=2,i;
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			count++;
		}
	}
	return count;
}
	if(n=sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
	
     
}
