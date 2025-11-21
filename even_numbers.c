#include<stdio.h>
int main()
{
	int x,rem,count=0,res;
	scanf("%d",&x);
	while(x>0)
	{
		rem=x%10;
		if(rem%2==0)
		{
			count++;
		}
		x=x/10;
	}
	printf("%d",count);
	return 0;
}
