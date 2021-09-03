#include <stdio.h>
#include <math.h>

int main(void){
	/*
	//question 1
	int w = 10, n, sum100 = 0, b100s200, b200d4;
	while(w > 0){
		printf("enter an integer: ");
		scanf("%d", &n);
		w--;
		if(n < 100){
			sum100 = sum100 + n;
		}
		else if(n >= 100 && n <= 200){
			b100s200++;
		}
		else if(n > 200 && n % 4 == 0){
			b200d4++;
		}
	}
	printf("sum of numbers smaller than 100: %d\n", sum100);
	printf("number of numbers between 100 and 200: %d\n", b100s200);
	printf("number of numbers which are greater than 200 and divisible by 4: %d\n", b200d4);
	
	//question 2
	int first = 9998, second = 9999, x, e = 10, putter;
	while(e > 0){
		printf("enter an integer: ");
		scanf("%d", &x);
		if(first > x){
			putter = first;
			first = x;
			second = putter;
		}
		if(first < x){
			if(second > x){
				second = x;
			}
		}	
		e--;
	}
	printf("second smallest number: %d\n", second);
	
	//question 3
	int y = 0, summ = 0; 
	float count = 0;
	while(y >= 0){
		summ = summ + y;
		printf("enter an integer: ");
		scanf("%d", &y);
		count++;
	}
	count --;
	printf("average of numbers: %.3f", summ / count);
	*/
	//question 4
	int num1, num2, num1div = 0, num2div = 0, div1 = 1, div2 = 1; 
	printf("enter two integers: ");
	scanf("%d %d", &num1, &num2);
	while(num1 > div1){
		if(num1 % div1 == 0){
			num1div = num1div + div1;
		}
		div1++;
	}
	while(num2 > div2){
		if(num2 % div2 == 0){
			num2div = num2div + div2;
		}
		div2++;
	}
	if(num1 == num2div && num2 == num1div){
		printf("(%d, %d) are amicable numbers", num1, num2);
	}
	else{
		printf("they are not amicable numbers");
	}
	
	return 0;
}
