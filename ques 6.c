/* 6. Write a program to print greater between two numbers. Print one number if both are the same.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two number : \n");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	   printf("%d is greater than %d",a,b);
	else
	   printf("%d is greater than %d",b,a);
	   
	return 0;
}
