#include<stdio.h>
int add(int,int);
int subtract(int,int);
int prod(int,int);
int division(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int sum=add(x,y);
	int diff=subtract(x,y);
	int pro=prod(x,y);
	int div=division(x,y);
	printf("Addition of %d and %d is: %d\n",x,y,sum);
	printf("Difference of %d and %d is: %d\n",x,y,diff);
	printf("Product of %d and %d is: %d\n",x,y,pro);
	printf("Division of %d and %d is: %d\n",x,y,div);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int prod(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}
