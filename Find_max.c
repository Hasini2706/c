#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("Enter the size of an array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>min)
		{
			max=arr[i];
		}
	}
	printf("Maximum element in array is %d",max);
}
