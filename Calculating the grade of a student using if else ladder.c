#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks of a Student ");
	scanf("%d",&marks);
	if (marks>=85 && marks<=100)
	{
		printf("\n Grade A");
	}
	else if (marks>=70 && marks<=84)
		{
			printf("\n Grade B");
	}
	else if (marks>=55 && marks<=69)
	{
		printf("\n Grade C");
	}
	else if (marks>=40 && marks<=54)
	{
		printf(" Grade D");
	}
	else 
	{
		printf(" Grade F");
	}
	return 0;
	}
