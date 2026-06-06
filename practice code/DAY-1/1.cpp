#include<stdio.h>

main()
{
	int a,b,c,d;

	
	printf("enter first number :  ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	printf("enter third number : ");
	scanf("%d",&c);
	
	printf("enter fourth number : ");
	scanf("%d",&d);
	
	if(a>b&&a>c&&a>d )
	{
		printf("first number is the greatest : %d",a);
		
	if(b>a&&b>c&&b>d )
	
		printf("second number is the greatest : %d",b);
		
	if(c>b&&c>a&&c>d )
	
	
		printf("third number is the greatest : %d",c);
	
	}	
	else
    {
    	printf("fourth number is greatest : %d",d);
	}
	
}
