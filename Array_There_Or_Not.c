#include<stdio.h>
int main()
{
	int n,i,arr[n],x;
	printf("size");
	scanf("%d",&n);
	printf("give numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Number to be found:");
	scanf("%d",&x);
	printf("Array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	if(x==arr[i])
	{
		printf("Yes! Number found");
	}
	else
	{
		printf("Number is not in the given array");
	}
	return 0;
}
