#include<stdio.h>
int main()
{
   int i,n,p;
   scanf("%d",&n);
   int arr[i];
   for(i=0;i<n;i++)
   {
   	 scanf("%d",&arr[i]);
   }
   	printf("enter position");
   	scanf("%d",&p);
   	printf("Elements before deletion\n");
   	for(i=0;i<n;i++)
   	{
   		printf("%d\t",arr[i]);
	   }
	   for(i=p-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("after deletion");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
	  
}

