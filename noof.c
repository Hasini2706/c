#include<stdio.h>
int main()
{
	int x,n,rem,count=0;
	scanf("%d",&x);
	while(x>0)
	{
		rem=n%10;
		count++;
		x=x/10;
	}
	printf("the no of digits:%d",count);
	return 0;
}
