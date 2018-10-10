#include<stdio.h>
#include<stdlib.h>
main()
{
	 float WEIGHT = 0, HEIGHT = 0, BMI;
	 printf("weightinkilometer=");
	 scanf_s("%f", &WEIGHT);
	 printf("heightinmeter=");
	 scanf_s("%f", &HEIGHT);
	 BMI = WEIGHT / HEIGHT / HEIGHT;
	 printf("BMI=");
	 printf("bmi=%f\n",BMI);
	 if(BMI<18.5)
	 {	
	 printf("Underweight\n");
	 }
	 else if(BMI>=18.5 && BMI<=24.9)
	 {
	 printf("Normal\n"); 
	 }
     else if (BMI >= 25 && BMI <= 29.9)
	 {
	 printf("Overweighht\n");
	 }
	 else if (BMI >= 30 )
	 {
	 printf("Obese\n");
	 }
	 printf("Underweight:less than 18.5\n");
	 printf("Normal: between 18.5 and 24.9\n");
	 printf("Overweighht between 25 and 29.9\n");
	 printf("Obese: 30 or greater\n");
	 system("pause");
	 return 0;
}