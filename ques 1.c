/*1. Write a program to check whether a given number is positive or non positive.*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n>0)
		printf("Nmber is positive");
	else if(n<0)
	    printf("number in negative");
	else
	    printf("Number is zero");
	    
	return 0;
}
