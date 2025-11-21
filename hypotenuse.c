#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,hypotenuse;
	scanf("%f %f",&x,&y);
	hypotenuse=sqrt((x*x)+(y*y));
	printf("%.2f",hypotenuse);
	return 0;
	}

