#include<stdio.h>
int main()
{
	int arr[10],i,n,p,ele;
	printf("Enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter position\n");
	scanf("%d",&p);
	printf("enter element to insert\n");
	scanf("%d",&ele);
	printf("before insertion\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	for(i=n;i>p-1;i--)
	{
		arr[i]=arr[i-1];
		n++;     //moving elements to right side
	}
	arr[p-1]=ele;
	printf("after element insertion in array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	
}
