#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	scanf("%d",&r);
	double pi=3.14;
	float area,peri;
	area=pi*r*r;
	printf("%.2f\n",area);
	peri=2*pi*r;
	printf("%.2f",peri);
	return 0;
}
