#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,l;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	for(k=n-1;k>=1;k--)
	{
		for(l=1;l<=k;l++)
		{
			printf("%d\t",l);
		}
		printf("\n");
	}
	return 0;
}
