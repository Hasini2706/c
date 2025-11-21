#include<stdio.h>
int main()
{
	FILE * fp1;
	fp1=fopen("CricketTeam.txt","r");
	if(fp1==NULL)
	{
		printf("File connection failed\n");
		return 1;
	}
	int count=0;
	char ch;
	int char_count=0,words_count=0,line_count=0;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
	    	break;
		
		printf("%c",ch);
		char_count++;
		if(ch==' '|| ch=='\n')
		words_count++;
		if(ch=='\n')
	    line_count++;
	}
		printf("no of charecters:%d \n",char_count);
		printf("no of words:%d\n",words_count);
		printf("no of line:%d\n",line_count);
	fclose(fp1);
	return 0;
}
