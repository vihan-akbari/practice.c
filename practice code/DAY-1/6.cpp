#include<stdio.h>

main()
{
	int i,y,o,p;
	char m,l;
	
	printf("\n\n                                                         libary\n\n");
	
	
	printf("\nenter day : ");
	scanf("%d",&y);
	printf("\nenter month in digits : ");
	scanf("%d",&o);
	printf("\nenter year in digits : ");
	scanf("%d",&p);
	
	if(y<=31&&0<=y&&o<=12&&0<=o&&p<=2050&&2010<=p)
	{
	printf("\n\ntoday's date : %d|%d|%d",y,o,p);	
	printf("\npress 1 for issue book .");
	printf("\npress 2 for return book.");
	printf("\npress 3 for check availablity.");
	printf("\n\nenter your choice : %d",i);
	scanf("%d",&i);
	
	switch(i)
	{
	case 1:	
		printf("                                                 issue book\n\n\n\n ");
		printf("\n A for DON QUIXOTE by MIGUEL DE CERVANTES\n");
		printf("\n B for PRIDE AND PREJUDICE by JANE AUSTINE\n");
		printf("\n C for 1984 by GEORGE ORWELL\n");
		printf("\n D for TO KILL MOCKINGBIRD by HARPER LEE\n");
		printf("\n E for THE GREAT GATSBY by F.SCOTT FITZGERALD\n");
		printf("\n F for THE LORD OF RINGS by J.R.R.TOLKIEN\n");
		printf("\n G for THE COUNNT OF MONTE CRISTO by ALEXANDRE DUMAS\n");
		printf("\n H for ONE HUNDRED YEARS OF SOLITUDE by GABRIEL GARCIA\n ");
		printf("\n I for THE BROTHERS KARAMAZOV by FYODOR DOSTOEVSKY\n");
		printf("\n J for THE BROTHERS KARAMAZOV by FYODOR DOSTOEVSKY \n");
		printf("\n K for LITTLE WOMEN by LOUISA MAY ALCOTT\n");
		printf("\n L for JANE EYRE by CHARLOTTE BRONTE\n");
		printf("\n M for WUTHERING HEIGHTS by EMILY BRONTE\n");
		printf("\n N for BRAVE NEW WORLD by ALDOUS HUXLEY\n");
		printf("\n O for ANIMAL FARM by GEORGE ORWELL\n");
		printf("\n P for FRANKENSTEIN by MARY SHELLEY\n");
		printf("\n Q for SAPIENS:A BRIEF HISTORY ON HUMAN KINDS by YUVAL NOAH HARARI\n");
		printf("\n R for ATOMIC HABBITS by JAMES CLEAR \n");
		printf("\n S for PSYCHOLOGY OF MONEY by MORGAN HOUSEL\n");
		printf("\n T for MAN'S SEARCH FOR MEANING  by VIKTOR E. FRANKL\n");
		printf("\n\nenter you choice : ");
		scanf(" %c",&l);
		
	
		switch(l)
		{
			case 'A':
				printf("\n\nISSUED DON QUIXOTE by MIGUEL DE CERVANTES");
				break;
				
				case 'B':
				printf("\n\nISSUED PRIDE AND PREJUDICE by JANE AUSTINE");
				break;
				
				case 'C':
				printf("\n\nISSUED 1984 by GEORGE ORWELL");
				break;
				
				case 'D':
				printf("\n\nISSUED TO KILL MOCKINGBIRD by HARPER LEE");
				break;
				
				case 'E':
				printf("\n\nISSUED THE GREAT GATSBY by F.SCOTT FITZGERALD");
				break;
				
				case 'F':
				printf("\n\nISSUED  THE LORD OF RINGS by J.R.R.TOLKIEN");
				break;
				
				case 'G':
				printf("\n\nISSUED THE COUNNT OF MONTE CRISTO by ALEXANDRE DUMAS");
				break;
				
				case 'H':
				printf("\n\nISSUED ONE HUNDRED YEARS OF SOLITUDE by GABRIEL GARCIA");
				break;
				
				case 'I':
				printf("\n\nISSUED THE BROTHERS KARAMAZOV by FYODOR DOSTOEVSKY");
				break;
				
				case 'J':
				printf("\n\nISSUED THE BROTHERS KARAMAZOV by FYODOR DOSTOEVSKY");
				break;
				
				case 'K':
				printf("\n\nISSUED LITTLE WOMEN by LOUISA MAY ALCOTT");
				break;
				
				case 'L':
				printf("\n\nISSUED JANE EYRE by CHARLOTTE BRONTE");
				break;
				
				case 'M':
				printf("\n\nISSUED WUTHERING HEIGHTS by EMILY BRONTE");
				break;
				
				case 'N':
				printf("\n\nISSUED BRAVE NEW WORLD by ALDOUS HUXLEY");
				break;
				
				case 'O':
				printf("\n\nISSUED ANIMAL FARM by GEORGE ORWELL");
				break;
				
				case 'P':
				printf("\n\nISSUED FRANKENSTEIN by MARY SHELLEY");
				break;
				
				case 'Q':
				printf("\n\nISSUED SAPIENS:A BRIEF HISTORY ON HUMAN KINDS by YUVAL NOAH HARARI");
				break;
				
				case 'R':
				printf("\n\nISSUED ATOMIC HABBITS by JAMES CLEAR");
				break;
				
				case 'S':
				printf("\n\nISSUED PSYCHOLOGY OF MONEY by MORGAN HOUSEL");
				break;
				
					case 'T':
				printf("\n\nISSUED MAN'S SEARCH FOR MEANING  by VIKTOR E. FRANKL\n");
				break;
	 }
	}		
  }
  else
		{
			printf("\n\ninvalide date . ");
	    }
		
			if(y+7<32)
				{
					printf("\n\nshould be returened on : %d|%d|%d| day",(int)y+7,o,p);
				}
}
