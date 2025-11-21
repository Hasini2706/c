#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)                  //row operation
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);               //column operation
			
		}
		printf("\n");
	}
	return 0;
}
