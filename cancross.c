#include<stdio.h>
int main()
{
	int mangoweight,truckweight,bridge,maxmangoes;
	scanf("%d%d%d",&mangoweight,&truckweight,&bridge);
	int remainingcap=bridge-truckweight;
	maxmangoes=remainingcap/mangoweight;
	printf("%d",maxmangoes);
	return 0;
}
