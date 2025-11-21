#include<stdio.h>
int binarySearch(int[],int,int);
int binarySearch(int x[],int size,int target)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x[mid]==target)
		return mid;
		else if(x[mid]<target)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int main()
{
	int n,i,found=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}int key;
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key){
			found=1;
			break;
		}
	}if(found)
	{
		printf("%d",i);
}
}
