/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing 
marks is 33. Now display whether the candidate passed the examination or failed. */

#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,per;
	printf("Enter marks of 5 sub :\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	
	total = s1+s2+s3+s4+s5;
	per = (total/500)*100;
	if(per>33)
	   printf("Passed");
	else
	   printf("Failed");
	   
	return 0;
}
