#include <stdio.h>
#include <math.h>

int main(void){
	//question1
	/*
	int x, sum1;
	float count;
	sum1 = 0;
	count = 0;

	while(count < 10){
		printf("enter an integer:");
		scanf("%d", &x);
		
		sum1 = sum1 + x;
		count++;
	}
	printf("summary = %d\n", sum1);
	printf("average = %.2f\n\n", sum1 / count);
	*/
	//question2
	int number, s100, s10, s1;
	printf("enter the number: ");
	scanf("%d", &number);
	
	s100 = number / 100;
	s10 = (number - (s100 * 100)) / 10;
	s1 = (number - (s100 * 100) - (s10 * 10));
	
	printf("sum of digits = %d", s100 + s10 + s1);
	/*
	//question3
	int min, max, sum;
	min = 12;
	max = 421;
	sum2 = 0;
	
	while(min <= max){
		if(min % 2 == 0){
			sum2 = sum2 + min;
		}
		min++;
	}
	printf("%d", sum2);
	//question4
	int y, sum3, count2;
	float count3;
	sum3 = 0;
	count2 = 0;

	while(count2 < 10){
		printf("enter an integer:");
		scanf("%d", &y);
		
		if(y % 2 == 0){
			sum3 = sum3 + y;
			count3++;
		}	
		count2++;
	}
	printf("summary = %d\n", sum3);
	printf("average = %.2f\n\n", sum3 / count3);
	
	//question5
	int n, age, female = 0, male = 0, female30 = 0, male50 = 0;
	float sumAgeF = 0, sumAgeM = 0;
	char gender;
	printf("enter the employee number: ");
	scanf("%d", &n);
	while(n > 0){
		printf("enter the gender and age(f or m and integer): ");
		scanf(" %c", &gender);
		scanf("%d", &age);
		
		if(gender == 'f'){
			if(age > 30){
				female30++;
			}
			female++;
			sumAgeF = sumAgeF + age;
		}	
		else if(gender == 'm'){
			if(age < 50){
				male50++;
			}
			male++;
			sumAgeM = sumAgeM + age;
		}
		else{
			printf("invalid character!");
		}
		n--;
	}
	
		printf("there are %d older than 30 age female and %d younger than 50 male workers\n", female30, male50);
		printf("%.2f is average of females\n", sumAgeF / female);
		printf("%.2f is average of males\n", sumAgeM / male);
	
	
	
	
	
	
*/	
}
