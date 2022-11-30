/* 17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
int main()
{
	float p,q,r;
	printf("enter side of a triangle:\n");
	scanf("%f%f%f",&p,&q,&r);
	
	if(p+q>r || q+r>p || r+p>q)
	   printf("Tringle is valid");
	else
	   printf("Tringle is not valid");
	   
	return 0;
}
