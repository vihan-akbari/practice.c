#include<stdio.h>

main()
{
	int i,sum=0;
	
	printf("enter any number : ");
	scanf("%d",&i);
	
	for(int n=1;n<=i;n++)
	{
		if(i%n==0&&n!=i&&sum==i)
		{
		   printf(" the factor of the number are : %d,\t\n\n",n);
		   
		   sum=sum+n;
    }    }
	
	if (sum==i)
	{
		printf("this is perfect number ");
	}
	else
	{
		printf("this is not  perfect number ");
	}
    printf("the sum of all factors are : %d",sum);
}
