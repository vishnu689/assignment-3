/* 9. Write a program to find the greatest among three given numbers. Print number once if the greatest 
number appears two or three times.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	   printf("%d is greatest among three",a);
	else if(b>a && b>c)
	   printf("%d is greatest among three",b);
	else if(a==b || b==c)
	   printf("Greatest no is %d that is repeated",b);
	else if(b==c || c==a)
	   printf("Greatest no is %d that is repeated",c);
	else
	   printf("%d is greatest among three",c);
	   
	return 0;
}
