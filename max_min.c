#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter value of num1,num2,num3:");
	scanf("%d %d %d",&num1,&num2,&num3);
	//finding maximum number
	if(num1>=num2 && num1>=num3)
	printf("maximum number=%d\n",num1);
	else if(num2>=num1 && num2>=num3)
	printf("maximum number=%d\n",num2);
	else
	printf("maximum number=%d\n",num3);
	//finding minimum number
	if(num1<=num2 && num1<=num3)
	printf("minimum number=%d\n",num1);
	else if(num2<=num1 && num2<=num3)
	printf("minimum number=%d\n",num2);
	else
	printf("minimum number=%d\n",num3);
	return 0;
}
