// using for loop statement to print out even numbers berween 0 and 20

#include<stdio.h>
int main ()
{
	int num, sum=0, i;
	printf("Enter a positive Integer: ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++)
	{
		sum+=i;
	}
	printf("%d \n", sum);
	
	return 0;
}
