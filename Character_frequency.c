#include<stdio.h>
#include<string.h>
int main()
{
	int arr[25]={0};
	int i;
	char str[50];
	printf("Enter any string\n");
	gets(str);
	printf("Before Uppercase Conversion: %s\n",str);
	strupr(str);
	printf("After Uppercase Conversion: %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-65]++;
	}
	printf("%s",str);
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		printf("%c -> %d\n",(char)i+65,arr[i]);
	}
	return 0;
	
}
