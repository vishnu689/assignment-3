/* 15. Write a program to check whether a given number is positive, negative or zero.*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n>0)
	  printf("Number is positive");
	else if(n<0)
	  printf("Number is negative");
	else
	  printf("number is zero");
	  
	return 0;
}
