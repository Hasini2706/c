#include<stdio.h>
int main()
{
	float arr[5]={101,202,303,404,505};
	float *ptr;
	int i;
	ptr=&arr[0];
	printf("Accessing of array elements by using pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u -> %f\n",(ptr+i),*(ptr+i));
	}
	return 0;
}
