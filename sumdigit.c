#include<stdio.h>
void main()
{
	int x,r,sum=0;
	printf("Emter a number:");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		sum=sum+r;
		x=x/10;
	}
	printf("Sum of digits = %d", sum);
}

