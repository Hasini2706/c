#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	do
	{
		printf("%d  ",i);
		i=i+2;
	}while(i<=n);
	printf("Task completed");
	return 0;
	
}
