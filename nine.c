#include<stdio.h>
int main()
{
	int i,n,m;
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++)
	{
	  printf("%d X %d =%d\n",m,i,(m*i));	
	}
	return 0;
}

