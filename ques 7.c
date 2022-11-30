/* 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & 
equal or imaginary roots. */ 

#include<stdio.h>
int main()
{
	int a,b,c,dis;
	printf("Enter quotient of ax^2+bx+c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	dis = (b*b)-4*a*c;
	if(dis>0)
	   printf("roots are real and distinct");
	else if(dis == 0)
	   printf("roots are real or equal");
	else
	   printf("roots are imaginory");
	   
	return 0;
}
