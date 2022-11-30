/* 18. Write a program which takes the month number as an input and display number of
days in that month.*/

#include<stdio.h>
int main()
{
	int m;
	printf("Enter month number : ");
	scanf("%d",&m);
	
	if(m==1 || m==4 || m==7 ||m==8 || m==10 || m==12 )
	   printf("No of daays is 31");
	else if(m==2)
	   printf("No of days may be 28 or 29");
	else
	   printf("no of days is 30");
	   
	return 0;
}
