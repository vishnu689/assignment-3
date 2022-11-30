/* 5. Write a program to check whether a given number is a three digit number or not.*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	if(n>99 && n<1000)
	   printf("Number contain three digit");
	else
	   printf("Number does't contain three digit");
	   
	return 0;
}
