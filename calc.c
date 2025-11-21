#include<stdio.h>
int main()
{
	int ch;
	float a,b;
	printf("enter the two numbers");
	scanf("%f%f",&a,&b);
	printf("enter 1.Addition 2.Subtraction 3.Multiplication 4.Division 5.equal or not\n");
	scanf("%i",&ch);
	switch(ch)
	{
		case 1:
			printf("addition %f",a+b);
			break;
		case 2:
			printf("subraction %f",a-b);
			break;
		case 3:
			printf("product %f",a*b);
			break;
		case 4:
			printf("division %.f",a/b);
			
		case 5:
			if(a=b)
			{
				printf("equal");
				
			}
			else
			{
				printf("not equal");
			}
		default:
			printf("in valid no");
		
		
			
			
		
	}
	
	
}
