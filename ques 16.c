/* 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet 
(lower case), a digit or a special character.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character : ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	   printf("Upper case");
	else if(ch>=97 && ch<=122)
	   printf("lower case");
	else if(ch>49 && ch<57)
	   printf("Digit");
	else 
	   printf("special charactor");
	   
	return 0;
	
}
