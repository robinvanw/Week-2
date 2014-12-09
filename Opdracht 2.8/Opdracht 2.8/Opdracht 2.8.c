#include <stdio.h>

int main(void)
{
	void error(void);

	int  maand, dag, aantal, goed=0, count=0;
	char welke[12][10] = { "Januari", "Februari", "Maart", "April", "Mei", "Juni", "Juli", "Augustus", "September", "Oktober", "November", "December" };

	printf("Welkom\n");

	while (goed != 1)
	{	
		printf("\nWelke maand wilt u bekijken(1 - 12) : ");
		scanf("%d", &maand);

		switch (maand)
		{	case 1:		aantal = 31;	goed = 1;	break;
			case 2:		aantal = 28;	goed = 1;	break;
			case 3:		aantal = 31;	goed = 1;	break;
			case 4:		aantal = 30;	goed = 1;	break;
			case 5:		aantal = 31;	goed = 1;	break;
			case 6:		aantal = 30;	goed = 1;	break;
			case 7:		aantal = 31;	goed = 1;	break;
			case 8:		aantal = 31;	goed = 1;	break;
			case 9:		aantal = 30;	goed = 1;	break;
			case 10:	aantal = 31;	goed = 1;	break;
			case 11:	aantal = 30;	goed = 1;	break;
			case 12:	aantal = 31;	goed = 1;	break;
			default:	error();
		}
	}

	while (goed != 2)
	{	
		printf("\nWelke dag wilt u beginnen (1-7) : ");
		scanf("%d", &dag);

		if ((dag>=1)&&(dag<=7))	{goed = 2;}

		else					{error();}
	}

	printf("\n\n\nUw maand %s : \n", welke[maand-1]);
	printf("\n\nzo  ma  di  wo  do  vr  za");
	printf("\n--------------------------\n");

	while (dag > 1)
	{	
		printf("    ");
		dag--;
		count = count + 1;
	}

	while (dag<=aantal)
	{	
		if (count == 7)
		{	
			count = 0;
			printf("\n");
		}
	printf("%2.d  ", dag++);
	count = count + 1;
	}

	getchar();
	getchar();
}

void error(void)
{
	printf("\nERROR\tOngeldige invoer\n");
}