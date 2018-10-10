#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=0;
	while (scanf_s("%d", &a) != EOF) 
	{
	    if (a%2==0)
	    {
			printf("even");
	    }
		else 
		{
			printf("odd");
		}
	}
}