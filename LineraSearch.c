#include<stdio.h>
int main()
{
	int i,key,n,found=0;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter the key element to search in given array");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("Element %d is found in given array ",key);
	}
	else
	{
		printf("Element not found in array");
	}
	return 0;
}
