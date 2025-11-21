#include<stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		sum=sum+(i*i);
	}
	printf("%d",sum);
	return 0;
	
}
