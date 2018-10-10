#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	while(scanf_s("%d%d",&a,&b) != EOF)
	{
		if(a%b==0)
		{
			printf("the first number is a multiple of the second");
		}
		else
		{
			printf("the first number is not a multiple of the second");
		}
	}
}