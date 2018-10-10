#include<stdio.h>
#include<stdlib.h>
main()
{
	int i, j;
	for (i = 0; i < 5 ; i++)
	{
		if(i == 0)
		{
			printf("         *\n");
		}
		else if(i == 1)
		{
			printf("        ***\n");
		}
		else if (i == 2) 
		{
			printf("       *****\n");
		}
		else if (i == 3)
		{
			printf("      *******\n");
		}
		else if (i == 4) 
		{
			printf("     *********\n");
		}
	}
	int a, b;
	char A[10]="    *    ";
	for(a=0;a<5;a++)
	{
		if (a != 0)
		{
			A[4 - a] = '*';
			A[4 + a] = '*';
     	}
		printf("%s\n", A);
	}
	system("pause");
	return 0;
}

