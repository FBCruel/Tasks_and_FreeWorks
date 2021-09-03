#include <stdio.h>

int main(void){
	
	//question 1
	int n, x = 1, y, c;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("First pattern: \n");
	for(y = 1; y <= n; ){
		for(c = 1; c <= 3; c++){
			printf("%d ", x);
			x = x + (2 * y);
		}
		y++;
		printf("\n");
		x = x - (x - y);
	}
	c = n;
	printf("\nSecond pattern: ");
	for(y = 1; y <= n + 1; ){
		for(x = 2 * c; x > 0; x--){
			printf(" ");
		}
		for(x = 1; x < y; x++){
			printf("%d ", x);
		}
		printf("\n");
		y++;
		c--;
	}
	
	//question 2
	int n2, x2, y2, c2, sp, yd = 1;
	printf("Enter n: ");
	scanf("%d", &n2);
	y2 = n2;
	sp = y2 - 1; 
	for(c2 = 0; c2 < y2; c2++){
		for(x2 = 0; x2 < sp ; x2++){
			printf("  ");
		}
		for(x2 = 0; x2 < yd; x2++){
			printf("* ");
		}
		printf("\n");
		sp--;
		yd+=2;
	}

	return 0;
}
