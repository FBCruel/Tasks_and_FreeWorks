#include <stdio.h>
#include <stdlib.h>

void change(double array[3][3]);
void question2(void);
void question3(void);

int main(void){
	
	//question1
	/*
	double array[3][3], number;
	int x = 0, y;
	
	printf("enter 9 real numbers: ");
	while(x < 3){
		y = 0;
		while(y < 3){
			scanf("%lf", &number);
			array[x][y] = number;
			y++;
		}
		x++;
	}
	change(array);
	*/
	//question2
	//question2();
	//question3
	question3();
	
	return 0;
}
void change(double array[3][3]){
	int x = 0, y;
	while(x < 3){
		y = 0;
		while(y < 3){
			if(x == 0){
				printf("%.2lf ", array[x][y] * 2.0);
			}
			else if(x == 1){
				printf("%.2lf ", array[x][y] / 2.0);
			}
			else{
				printf("%.2lf ", array[x][y] - 1.0);
			}
			y++;
		}
		printf("\n");
		x++;
	}
	printf("\n");
}
void question2(void){
	int array1[2][4], array2[2][4], number, row = 0, col, e = 0, cont = 1;
	printf("enter integers to fill first array: ");
	while(row < 2){
		col = 0;
		while(col < 4){
			scanf("%d", &number);
			array1[row][col] = number;
			col++;
		}
		row++;
	}
	row = 0;
	printf("enter integers to fill second array: ");
	while(row < 2){
		col = 0;
		while(col < 4){
			scanf("%d", &number);
			array2[row][col] = number;
			col++;
		}
		row++;
	}
	row = 0;
	while(row < 2){
		col = 0;
		while(col < 4){
			if(array1[row][col] != array2[row][col]){
				cont = 0;
				break;
			}
			col++;
		}
		if(cont == 0){
			break;
		}
		row++;
	}
	printf("point that elements are different is = (%d, %d)\n"
	"different elements are %d and %d", row, col, array1[row][col], array2[row][col]);
	
}
void question3(void){
	srand(time(NULL));
	int number, x = 0, y, col;
	printf("How many columns do you want to produce random numbers between 1 and 49? ");
	scanf("%d", &col);
	int array[col][49];
	
	while(x < col){
		y = 0;
		while(y < 6){
			number = rand() %49 + 1;
			array[x][y] = number;
			y++;
		}
		x++;
	}
	x = 0;
	while(x < col){
		y = 0;
		while(y < 6){
			printf("%d ", array[x][y]);
			y++;
		}
		printf("\n");
		x++;
	}
}
















