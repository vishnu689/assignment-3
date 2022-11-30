/* 12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	if(ch>= 65 && ch<=90)
	   printf("Upper case");
	else if(ch>=97 && ch<=122)
	   printf("Lower case");
	   
	return 0;
}
