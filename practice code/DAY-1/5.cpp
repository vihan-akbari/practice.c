#include<stdio.h>

main()
{
      int y,i,n,m;
	
	printf("\n\n                                         EXPENCE TRACKER        5\n\n");
	
	printf("\n enter the expence in travel :  ");
	scanf("%d",&i);
	printf("\n enter the expence in food :  ");
	scanf("%d",&n);
	printf("\n enter the expence in study :  ");
	scanf("%d",&m);	
	
	y=i+n+m;
	printf("\ntotal : %.1f\n",(float)y);
	i=(float)i/y*100;
	n=(float)n/y*100;
	m=(float)m/y*100;
	
	
	printf("\n\nthe expence for travel in persentage: %.2f",(float)i);
	printf("\n\nthe expence for food in persentage: %.2f",(float)n);
	printf("\n\nthe expence for study in persentage: %.2f",(float)m);
	
	if(i>n&&i>m)
	{
		printf("\n\nthe gretest expence is on travel .");
	}
	
		else if(n>i&&n>m)
	{
		printf("\n\nthe gretest expence is on food .");
	}
	
		else if(m>n&&m>i)
	{
		printf("\n\nthe gretest expence is on study .");
	}
	
	else if(i==n==m)
	{
		printf("\n\nall are equal .");
	}
	
	else
	{
		printf("\n\ninvalide input .");
	}
}
