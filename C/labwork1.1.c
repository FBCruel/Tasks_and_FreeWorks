#include <stdio.h>
#include <math.h>

int main(void){
	/*
	//question1
	int x, y;
	printf("input two integers: ");
	scanf("%d %d",&x, &y);
	
	printf("5x + 2y - 8 = %d\n", (5 *x) + (2 * y) - 8);
	printf("3x^2 - 8x + 7y = %d\n", (3 * x * x) - (8 * x) + (7 * y));	
	printf("3xy^2 + 6 = %d\n\n", (3 * x * y * y) + 6);
	
	//question2
	int j, k, l, m, n;
	printf("enter five integers: ");
	scanf("%d %d %d %d %d",&j, &k, &l, &m, &n);
	
	printf("%d %d %d %d %d\n\n", j%8, k%8, l%8, m%8, n%8);
	
	//question3
	float a, b, c;
	printf("enter three float numbers: ");
	scanf("%f %f %f", &a,&b, &c);
	
	printf("%f\n\n", (((2 * a) + (3 * b)) * 4) + (7 * c));
	
	//question4
	float C, F;
	printf("enter degree in Celcius: ");
	scanf("%f", &C);
	F = (95 * C) + 32;
	
	printf("%f Fahrenheit\n\n", F);
	*/
	
	//question5
	int total, t10, t5, t1;
	printf("enter amount of TL: ");
	scanf("%d", &total);
	
	t10 = total / 10;
	t5 = (total - (10 * t10)) / 5;
	t1 = (total - (10 * t10) - (5 * t5)) / 1;
	
	printf("your money includes %d ten liras, %d five liras and %d one lira", t10, t5, t1);
	 
	
	
	
	return 0;
	
}






