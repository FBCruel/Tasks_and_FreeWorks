#include <stdio.h>
#include <stdlib.h>
void reverse(int *numberF);
int palindrome(int number);
void find_minmax(int a, int b, int c, int *max, int *min);
void countMultiples(int num, int div, int *res);

int main(void){
	//question1
	
	int var = 5, *p;
	p = &var;
	printf("value of 'var' is %d\n", var);
	printf("value of 'var' is %d\n", *p);
	printf("adress of 'var' is %d\n", &var);
	printf("adress of 'var' is %d\n", p);
	printf("value of 'p' is %d\n", p);
	printf("adress of 'p' is %d\n", &p);
	
	//question2
	
	int number;
	printf("\nenter a number: ");
	scanf("%d", &number);
	palindrome(number);
	
	//question3
	
	int a, b, c, *max = 0, *min = 0;
	printf("\nenter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	find_minmax(a, b, c, &max, &min);
	printf("\nmax value is %d, min value is %d\n\n", max, min);
	
	//question4
	int num, div, *res = 0;
	printf("enter upper limit: ");
	scanf("%d", &num);
	printf("enter divisor: ");
	scanf("%d", &div);
	countMultiples(num, div, &res);
	
	return 0;
}

void reverse(int *numberF){
	int counter = -1, num = 0, number2 = *numberF, reverse= 0;
	while(number2 >= 1){
		number2 = number2 / 10;
		counter++;
	}
	while(*numberF >= 1){
		num = *numberF % 10;
		*numberF = *numberF / 10;
		reverse = reverse + num * pow(10, counter);
		counter--;
	}
	*numberF = reverse;

}

int palindrome(int number){
	int y = number;
	reverse(&number);
	if(y == number){
		printf("it is a palindrome number!\n");
	}
	else{
		printf("it is not a palindrome number\n");
	}
	
}

void find_minmax(int a, int b, int c, int *max, int *min){
	if(a > b && a > c){
		if(b > c){
			*max = a;
			*min = c;
		}
		else{
			*max = a;
			*min = b;
		}
	}
	else if(b > a && b > c){
		if(a > c){
			*max = b;
			*min = c;
		}
		else{
			*max = b;
			*min = a;
		}
	}
	else if(c > a && c > b){
		if(a > b){
			*max = c;
			*min = b;
		}
		else{
			*max = c;
			*min = a;
		}
	}
	
}
void countMultiples(int num, int div, int *res){
	int numF = num;
	while(numF > 0){
		if(numF % div == 0){
			*res = *res + 1;
		}
		numF--;
	}
	printf("%d integers can be divided by %d between 0 and %d", *res, div, num);
}






