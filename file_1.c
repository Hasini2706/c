#include<stdio.h>
int main()
{
	int n1,n2,n3,result;
	scanf("%d%d%d",&n1,&n2,&n3);
	result=((n1>n3)?((n1>n2)?n1:n2):((n2>n3)?n2:n3));2
	printf("The maximum of given numbers is %d",result);
	return 0;
}
