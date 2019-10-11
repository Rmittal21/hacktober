#include<stdio.h>
#include<conio.h>
int fact(int a)
{
	int prod=1;
	if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
		prod=n*fact(n-1);
	return prod;
}
int main()
{
	int n,r,a,p,c,f;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\nEnter value of r: ");
	scanf("%d",&r);
	a=(n-r);
	p=fact(n)/fact(a);
	c=fact(n)/(fact(r)*fact(a));
	printf("\nPermutation : %d",p);
	printf("\nCombination : %d",c);
	return 0;
}
