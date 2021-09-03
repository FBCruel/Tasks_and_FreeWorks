#include <stdio.h>
#include <math.h>

int main(void){
	/*
	//question 1
	int x1, y1, count = 10, sit = 0;
	while(count > 0){
		printf("enter two integers: ");
		scanf("%d %d", &x1, &y1);
		
		if(x1 > y1){
			sit++;
		}
		
		count--;
	}
	printf("there are %d many x > y conditions", sit);
	
	//question 2
	int s1, s10, s100, s1000, num = 0000, stick;
	do{
		s1000 = num / 1000;
		s100 = (num - (s1000 * 1000)) / 100;
		s10 = (num - (s1000 * 1000) - (s100 * 100)) / 10;
		s1 = (num - (s1000 * 1000) - (s100 * 100) - (s10 * 10));
		stick = s1000 * pow(s100,2) + s10 * pow(s1,2);
		if(num == stick){
			printf("%d satisfies the rule\n", num);
		}
		num++;
		
	}while(num >= 0000 && num <= 9999);
	
	//question 3
	int x2 ,y2, base = 1, fact = 1, oldx, oldy; //oldx ve oldy gerek yokmuþ
	printf("enter two integers: ");
	scanf("%d %d", &x2, &y2);
	while(x2 * y2 >= 0){
		oldx = x2;
		oldy = y2;
		if((x2 * y2) % 2 == 1){
			
			if(oldx >= 0){
				while(x2 > 0){
					base = base * 3;
					x2--;
				}
				printf(" 3^x = %d\n", base);
			}
			else{
				if(oldx < 0){
					while(x2 < 0){
						base = base * 3;
						x2++;
					}
				printf("3^x = 1/%d\n", base);
				}
			}
		}
		else{
			if(y2 >= 0){
				while(y2 > 0){
				fact = fact * y2;
				y2--;	
			}
			printf("y! = %d\n", fact);
			}
			else{
				printf("there is no factorial of %d\n", y2);
			}
		}
		printf("enter two integers: ");
		scanf("%d %d", &x2, &y2);
	}
	printf("goodbye");
	*/
	//question 4
	int i, j, k; 
	for(i = 0; i < 10; i++){
		for(j = 0; j < i; j++){
			printf(" ");
		}
		for(k = 0; k < 1; k++){
			printf("***\n");
		}
	}
	
	//question 5
	int number, c1, c2;
	printf("enter an integer: ");
	scanf("%d", &number);
	for(c1 = number; c1 > 0; c1--){
		for(c2 = number; c2 > number - c1; c2--){
			printf("%d", c2);	
		}
		printf("\n");
	}

	return 0;
}

