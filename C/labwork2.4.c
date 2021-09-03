#include <stdio.h>
#include <stdlib.h>

void question1();
void question2();
void question3();
void question4();

int main(void){
	//question1
	question1();
	//question2
	question2();
	//question3
	question3();
	//question4
	question4();
	
	
	
	
	
	return 0;
}

void question1(){
	int array[10], array2[10], number, n, n1, index = 0;
	while(index <= 9){
		printf("enter an integer: ");
		scanf("%d", &number);
		array[index] = number;
		array2[index] = number;
		index++;
	}
	index--; //its 10
	printf("enter an integer to shift array members: ");
	scanf("%d", &n);
	n1 = n;
	//printf("%d\n", index);
	while(index > 6){
		array2[index] = array[n1-1];
		index--;
		n1--;
	}
	while(index >= 0){
		array2[index] = array[index + n];
		index--;
	}
	index++; //its -1
	while(index < 10){
		printf("%d ", array2[index]);
		index++;
	}
}

void question2(){
	int array[29], index = 0, index2, number, N, num = 0, num2, counter = 0;
	printf("\n\nenter N (N < 30): ");
	scanf("%d", &N);
	
	while(index < N){
		printf("enter an integer: ");
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	index--;
	while(num < 10){
		index2 = index;
		while(index2 >= 0){
			if(array[index2] == num){
				num2 = num;
				counter++;
			}
			index2--;
		}
		if(counter > 0){
			printf("%d occurs %d times\n", num2, counter);
		}
		num++;
		counter = 0;
	}
	printf("\n");
}

void question3(){
	int array[10], number, first = 99999998, second = 99999999, index;
	for(index = 0; index < 10; index++){
		printf("enter an integer: ");
		scanf("%d", &number);
		array[index] = number;
	}
	index--;
	for(index = 9; index >= 0; index--){
		if(array[index] < first){
			second = first;
			first = array[index];
		}
		else if(array[index] < second && array[index] > first){
			second = array[index];
		}
	}
	printf("the smallest is %d \nthe second smallest %d\n\n", first, second);
}

void question4(){
	int array[10], number, rep, index = 0;
	while(index <= 9){
		printf("enter an integer: ");
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	index--;
	while(index >= 1){
		if(array[index] == array[index -1]){
			rep = array[index];
		}
		index--;
	}
	printf("the number which repeats is %d", rep);	
}






