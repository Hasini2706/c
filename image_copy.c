#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("Hasini.jpg","rb");
	fp2=fopen("Copy_Hasini.jpg","wb+");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File Connection failed\n");
		return 2;
	}
	char buffer[1024];
	unsigned int bytesRead;
	while(1)
	{
		bytesRead=fread(buffer,1,sizeof(buffer),fp1);
		if(bytesRead==0)
		break;
		
		fwrite(buffer,1,sizeof(buffer),fp2);
		
	}
	printf("Image copied successfully\n");
	return 0;
}
