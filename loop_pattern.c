#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c     %c\n",(char)(64+i),(96+j));
		}
		printf("\n");
	}
}
