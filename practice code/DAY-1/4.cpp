#include<stdio.h>

main()
{
	int i,n;
	char m;
	
	printf("\n\n                                                         ATM MACHINE .");
	printf("\n\n                                             the passoward for ATM = 123456.\n\n");
	
	printf("PLEASE enter six degit passward for ATM which is up : ");
    scanf("%d",&n);
	
	if(n==123456)
	{
	printf("press 1 for Deposit.\n");
	printf("press 2 for Withdraw.\n");
	printf("press 3 for Check Balance.\n");
	printf("press 4 for Exit.\n");
	printf("enter your choice : %d",i);
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			   printf("\nfor deposit you want :  \n");
			   printf("A for deposit : 500\n");
			   printf("B for deposit : 1000\n");
			   printf("C for deposit : 1500\n");
			   printf("D for deposit : 2000\n");
			   printf("enter your choice in capital : %c",m);
			   scanf(" %c",&m);
			   
			   	switch(m)
			   	{
			   		case'A':
			   			printf(" deposited : 500");
			   			
			   		break;
			   		case'B':
			   			printf(" deposited : 1000");
			   			
			   		break;
			   		case'C':
			   			printf(" deposited : 1500");
			   			
			   		break;
			   		case'D':
			   			printf(" deposited : 2000");
			   			
			   		break;
			   	}
			   		
			   			case 2:
			   printf("\nfor withdraw you want :  \n");
			   printf("A for withdraw  : 500\n");
			   printf("B for withdraw : 1000\n");
			   printf("C for withdraw : 1500\n");
			   printf("D for withdraw : 2000\n");
			   printf("enter your choice in capital : %c",m);
			   scanf(" %c",&m);
			   
			   
			   	switch(m)
			   	{
			   		case'A':
			   			printf(" withdrawed : 500");
			   			
			   		break;
			   		case'B':
			   			printf(" withdrawed : 1000");
			   			
			   		break;
			   		case'C':
			   			printf(" withdrawed 1500");
			   			
			   		break;
			   		case'D':
			   			printf(" withdrawed 2000");
			   			
			   		break;
			    }
			   			case 3:
			   printf("\n your balance is : 1000000000 \n");
			   
			   switch(m)
			   {
			   	 	printf("\n checking balance is : 1000000000 \n");
			   }
			
				
			   }
 }  
     else
     {
     	printf("\npassword is wrong .\n");
	 }
}

