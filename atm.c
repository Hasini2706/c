#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if(x%100==0 && x<=500)
	{
	  printf("1");	
	}
	else if(x%100==0 && x>500 && x<1000)
	{
	   y=(x-500)/100;
	   printf("%d",y+1);
	}
	else if(x%100==0 && x>1000)
	{
		y=(x/1000)+(500-x);
		printf("%d",y);
	}
	else
	{
		printf("please enter the amount divisible by 100");
	}
}
