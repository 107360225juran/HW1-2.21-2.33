#include<stdio.h>
#include<stdlib.h>
 main()
{
	 int a, b, c;
	 scanf_s("%d%d%d", &a, &b, &c);
	 if(a>b && a>c)
	 {
		 printf("largest:%d", a);
	 }
	 else if (b>c && b>a)
	 {
		 printf("largest:%d", b);
	 }
	 else if (c > a && c > b)
	 {
		 printf("largest:%d", c);
	 }
	 if (a<b && a<c)
	 {
		 printf("smallest:%d", a);
	 }
	 else if (b < a && b < c)
	 {
		 printf("smallest:%d", b);
	 }
	 else if (c < a && c < b)
	 {
		 printf("smallest:%d", c);
	 }
	 system("pause");
}