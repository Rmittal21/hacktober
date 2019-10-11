#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum1=0,sum2=0,d=0;
	//sum1 is sum of even digits.
	//sum2 is sum of odd digits.
	printf("Enter a number(other than 0): ");
	scanf("%d",&n);
	while(n!=0)
	{
		//d is the extracted digit.
		d+=n%10;
		if(d%2==0)
			sum1+=d;
		else
			sum2+=d;
		n/=10;
		d=0;
	}
	printf("\nSum of even digits: %d",sum1);
	printf("\nSum of odd digits: %d",sum2);
	return 0;
}
	
