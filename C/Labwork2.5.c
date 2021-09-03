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
	int number = -9999999, controller = 0, oldnum, result = 1;
	while(controller < 10){
		oldnum = number;
		printf("enter 10 integers: ");
		scanf("%d", &number);
		
		if(number <= oldnum){
			result = 0;
		}
		controller++;
	}
	if(result == 1){
		printf("numbers are in ascending order\n\n");
	}
	else{
		printf("numbers are not in ascending order\n\n");
	}
	
}
void question2(){
	int array[10], index = 0, number, fact, num;
	while(index < 10){
		printf("enter 10 integers: ");
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	index = 0;
	while(index < 10){
		num = array[index];
		fact = 1;
		while(num > 0){
			fact = fact * num;
			num--;
		}
		printf("%d ", fact);
		index++;
	}
}
void question3(){
	int array[10], index = 0, number, counter = 0, index2; 
	while(index < 10){
		printf("\n\nenter 10 integers: ");
		scanf("%d", &number);
		array[index] = number;
		index++;
	}
	index = 0;
	while(index < 10){
		index2 = index + 1;
		while(index2 < 10){
			if(array[index] > array[index2]){
				counter++;
			}
			index2++;
		}
		index++;
	}
	printf("there are %d inversions where a<b and A[b]<A[a]\n\n", counter);
}
void question4(){
	int array[100], index = 0, number, counter, num = 1, controller = 0, numholder;
	while(index < 100){
		number = 1 + rand() % 11;
		array[index] = number;
		index++;
	}
	printf("Score\tFrequency\tHistogram\n");
	while(num < 11){
		index = 0;
		counter = 0;
		printf("%d\t", num);
		while(index < 100){
			if(num == array[index]){
				counter++;
			}
			if(counter > controller){
				controller = counter;
				numholder = num;
			}
			index++;
		}
		printf("%d\t\t",counter);
		while(counter > 0){
			printf("*");
			counter--;
		}
		printf("\n");
		num++;
	}
	printf("mode value is %d. it occured %d times", numholder, controller);
	
	
	
	
	
	
	
}
