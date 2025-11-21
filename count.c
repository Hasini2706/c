#include<stdio.h>
int digitscount(int);
int findDigitscount(int n)
{
	int digits=0;
	while(n>0)
	{
		int rem=n%10;
		digits++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n,count;
	scanf("%d",&n);
	digitscount=findDigitscount(n);
	printf("the number of digits of a given number %d is :%d",n,count);
	return 0;
	
}


