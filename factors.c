#include<stdio.h>
int findfactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf("\n factors of given number %d is:%d  \n",n,fact_count);
	if(fact_count==2)
      {
      	printf("PRIME \n");
      }  
      else
      {
      	printf("NOT A PRIME");
	  }
	return 0;
}
int findfactors(int m)
{
	int count=2,i;
	printf("1\n");
	for(i=2;i<=m/2;i++)
	{
      if(m%i==0)
      {
      	printf("%d \n",i);
      	count++;
      }  
	  
	}
    printf("%d\n",m);
    return count;
}
