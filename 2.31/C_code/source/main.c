#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	for (i = 0; i < 11; i++)
	{
		printf("number=%d", i);
		printf("square=%d", i*i);
		printf("cube=%d\n", i*i*i);
	}
	system("pause");
	return 0;
}
