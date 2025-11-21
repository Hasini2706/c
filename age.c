#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>0 && x<=2)
	{
		printf("Infants");
	}
	else if(x>=3 && x<=12)
	{
		printf("Child");
	}
	else if(x>=13 && x<=19)
	{
		printf("Teen");
	}
	else if(x>=20 && x<=64)
	{
		printf("Adult");
	}
	else 
	{
		printf("Senior");
	}
	return 0;
	
}
