/* 10. Write a program which takes the cost price and selling price of a product from the user. Now 
calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
	int cp,sp,p,l,per;
	printf("Enter cost price and selling price:\n");
	scanf("%d%d",&cp,&sp);
	
	if(sp>cp)
	{
		p=sp-cp;
		per=p/cp*100;
		printf("profit of %d",per);
	}
	else
	{
		l=cp-sp;
		per=l/cp*100;
		printf("loss of %d",per);
	}
	
	return 0;
}
