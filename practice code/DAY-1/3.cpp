#include<stdio.h>

main()
{
	int i,n,m;
	
	
	printf("\n\nfloor input\n\n");
	printf("Enter current floor : ");
	scanf("%d",&i);
	
	printf("Enter choice of floor : ");
	scanf("%d",&n);
	
	printf("\nfloor output\n");
	
	if (i>n)
	{
		printf("you are going downword : %d ",i-n);
	}
	else if (n>i)
	{
		printf("you are going upward : %d",n-i);
	}
}
