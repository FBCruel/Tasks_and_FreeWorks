#include <stdio.h>
#include <stdlib.h>

void question1(int array[100], int length);
int question2(void);
void question3(void);
void question4(void);

int main(void){
	
	//question1
	int array[100], length, index = 0, number;
	
	printf("enter a positive integer(n<100): ");
	scanf("%d", &length);
	printf("enter %d integers: ", length);
	while(index < length){
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	question1(array, length);
	//question2
	//printf("first unrepeated element: %d\n\n", question2());
	//question3
	//question3();
	//question4
	//question4();
	
	return 0;
}

void question1(int array[100], int length){
	int index = 0, big = -99999, small = 99999, idxbig, idxsmall, diff;
	
	index = 0;
	while(index < length){
		if(array[index] > big){
			big = array[index];
			idxbig = index;
		}
		index++;
	}
	index = 0;
	while(index < length){
		if(array[index] < small){
			small = array[index];
			idxsmall = index;
		}
		index++;
	}
	diff = idxbig - idxsmall;
	if(diff < 0){
		diff = -1 * diff;
	}
	printf("number of elements between min and max: %d\n\n", diff - 1);
}
int question2(void){
	int array[10], number, index = 0, unrep;
	
	printf("enter 10 integers: ");
	while(index < 10){
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	index = 1;
	while(index < 10){
		if(array[index] == array[index - 1] || array[index] == array[index + 1]){
			unrep = unrep;	
		}
		else{
			unrep = array[index];
			return unrep;
		}
		index++;
	}
}
void question3(void){
	int array[10][30], answer, mod, person = 0, quest, x, y, z, temp, oldc = 0, c = 0;
	float avg, med;
	while(person < 10){
		avg = 0;
		quest = 0;
		while(quest < 30){
			printf("your answer for question %d: ", quest + 1);
			scanf("%d", &answer);
			array[person][quest] = answer;
			avg = avg + answer;
			quest++;
		}
		for(x = 0; x < 10; x++){
			for(y = 0; y < 30; y++){
				for(z = 0; z < 30; z++){
					if(array[x][y] > array[x][z]){
						temp = array[x][y];
						array[x][y] = array[x][z];
						array[x][z] = temp;
					}
				}
			}
		}
		printf("\n\nsorted by increase!!\n");
		for(x = 29;x >= 0;x--){
			printf("%d ", array[person][x]);
		}
		x = 29;
		oldc = 0;
		c = 0;
		while(x > 0){
			if(array[person][x] == array[person][x - 1]){
				c++;
			}
			else{
				if(c > oldc){
					oldc = c;
					mod = array[person][x];
				}
				c = 0;
			}
			x--;
		}
		med = (float)(array[person][14] + array[person][15]) / 2;
		printf("\nmod = %d\n", mod);
		printf("median = %.2f\n", med);
		printf("average answer of this person is %.2f\n\n", avg / (quest));
		person++;
	}
}
void question4(void){
	int array[5][5], number = 1, x = 1, y;
	printf("\n\n");
	while(x < 5){
		y = 1;
		while(y < 5){
			array[x][y] = number;
			number++;
			y++;
		}
		x++;
	}
	x = 1;
	y = 1;
	while(x < 5){
		y = 1;
		while(y < 5){
			printf("|%d| ", array[x][y]);
			y++;
		}
		printf("\n\n");
		x++;
	}
	printf("\n\n");
	x = 1;
	y = 1;
	while(x < 5){
		y = 1;
		while(y < 5){
			printf("|%d| ", array[y][x]);
			y++;
		}
		printf("\n\n");
		x++;
	}
	
}








