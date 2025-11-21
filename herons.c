#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,area;
	printf("enter the sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("sides of triangle are:\n");
	printf("side -1=%d\n",a);
	printf("side -2=%d\n",b);
	printf("side -3=%d\n",c);
	printf("area of triangle is :%.2lf",area);
	return 0;
	
}
