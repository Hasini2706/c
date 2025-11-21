#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter size");
	scanf("%d",&n);
	int arr[n];
	printf("GIVE ELEMENTS");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%10==i)
		count++;
	}
	printf("%d",count);
	return 0;
	
}
