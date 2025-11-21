#include<stdio.h>
int main()
{
	double a,d,sum;
	int n;
	printf("enter first term");
	scanf("%lf",&a);
	printf("enter d");
	scanf("%lf",&d);
	printf("enter no of terms");
	scanf("%d",&n);
	sum=2*a+(n-1)*d;
	printf("sum of series is %.2lf\n",sum);
	return 0;
}
