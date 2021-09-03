#include <stdio.h>
#include <math.h>

void question1();
void question2();
int question3();
void question4();

int main(void){
	//question 1
	//question1();
	//question 2
	//question2();
	//question 3
	int c = 0, r = 0, m;
	while(c < 10){
		m = question3();
		printf("%d\n",m);
		if(m == 1){
			r++;
		}
		c++;
	}
	printf("%d of them satisfies the rule\n\n", r);
	//question 4
	//question4();
	
	return 0;
}

void question1(){
	int n, x, y, z, a, b;
	printf("Enter n: ");
	scanf("%d", &n);
	a = (2 * n) - 1;
	b = n;
	for(x = 0; x < n; x++){
		for(y = b; y < n; y++){
			printf(" ");
		}
		b--;
		for(z = 0; z < a; z++){
			printf("*");	
		}
		a-=2;
		printf("\n");
	}
	printf("\n");
}

void question2(){
	int v, d, h, m, s;
	printf("Enter seconds: ");
	scanf("%d", &v);
	
	d = v / 86400;
	h = (v - (d * 86400)) / 3600;
	m = (v - (d * 86400) - (h * 3600)) / 60;
	s = v - (d * 86400) - (h * 3600) - (m * 60);
	printf("%d seconds is equal to %d days, %d hours, %d minutes, %d seconds.\n\n", v, d, h, m, s);	
	
}

int question3(){
	int num, first, second, result = 0;
		printf("enter an integer: ");
		scanf("%d", &num);
		first = num / 100;
		second = num - (first * 100);
		if(num == pow((first + second), 2)){
			result = 1;
		}
		else{
			result = 0;
		}
		return result;
}

void question4(){
	int first = 1, second;
	while(first <= 10){
		second = 1;
		while(second <= 10){
			printf("%d & %d", first, second);
			if(first == second){
				printf(" is 1\n");
			}
			else{
				printf(" is 0\n");
			}
			second++;
		}
		printf("\n");
		first++;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

