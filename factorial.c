#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of given integer is%d",f);
}