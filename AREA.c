/* PROGRAM TO FIND ARREA OF CIRCLE */


#include<stdio.h>     //link section
#define PI 3.142      //Definition Section
void displayArea();   //function prototype
float area;           //Global variable declaration
int main()            //main fuunction section
{
	 float r;         //local variable declaration 
	scanf("%f",&r);
		displayArea();
	area=PI*r*r;
	displayArea();
	return 0;
}
void displayArea()
{
	printf("Area=%.2f",area);
}
