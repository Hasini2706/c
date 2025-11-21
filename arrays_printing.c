#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements\n");
	for(i=5;i>1;i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
