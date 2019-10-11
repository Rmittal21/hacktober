#include<stdio.h>
int main()
{
	float i, n, sum=0.0;
	printf("Calculating sum of series 1+ 1/2+ 1/3+...+1/n \n");
	printf("Enter the value of n: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("\nSum of the given series is: %f",sum);
	return 0;
}
