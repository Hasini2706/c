#include<stdio.h>
int main()
{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	
	if(n >=18)
	{
		printf(" person eligible to vote\n",n);
		printf("thank you");
	}
	else
	{
		printf(" person not eligible to vote\n",n);
		printf("you need to wait %d years for voting\n",18-n);
	}
	return 0;
}
