#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	char s1[50];   //copy of the string
	printf("Enter any string\n");
	gets(s);
	int len=strlen(s);
	printf("the length %s string:%d\n",s,len);
	strupr(s);
	strlwr(s);
	printf("After the uppercase:%s\n ",s);
	printf("Enter the lowercase:%s\n",s);
	strcpy(s1,s);
	printf("value of s1 after copy the s is:%s\n",s);
	strrev(s);
	printf("enter the reverse string:%s\n",s);
	strcat(s,s1);
	printf("After string concatenation:%s\n",s);  
	//string comparsion
	char s3[]="hello";
	char s4[]="Hello";
	int d=strcmp(s3,s4);
	printf("%d ",d);
	
	
}
