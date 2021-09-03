#include <stdio.h>
#include <stdlib.h>

int arrayFiller1();
void arrayFiller2();
void dimension();

int main(void){
	
	//question1
	
	int array1[10] = {5, 8, 11, 14, 17, 20, 23, 26, 29, 32}, i = 0;
	while(i < 10){
		printf("%d ", array1[i]);
		i++;
	}
	printf("\nsum = %d\n", array1[2] + array1[5] + array1[9]);
	
	//question2
	int array3[10];
	int  mean = 0, index = 0, a = 1;
	
	mean = arrayFiller1() / 10;
	printf("new array is: ");
	while(index < 10){
		array3[index] = mean + a;
		printf("%d ", array3[index]);
		index++;
		a++;	
	}
	
	//question3
	arrayFiller2();
	
	//question4
	dimension();
	
	return 0;
}

int arrayFiller1(){
	int array2[10];
	int number, index = 0, sum = 0;
	
	while(index < 10){
		printf("enter an integer which will be a member of array:");
		scanf("%d", &number);
		array2[index] = number;
		sum = sum + array2[index];
		index++;
	}
	return sum;
}

void arrayFiller2(){
	double array4[50];
	int index = 0;
	while(index < 24){
		array4[index] = index * index;
		index++;
	}
	while(index > 24 && index < 50){
		array4[index] = index * 3;
		index++;
	}
	index = 0;
	while(index < 50){
		if(index < 10){
			printf("%lf ", array4[index]);
		}
		else if(index < 20){
			printf("%lf ", array4[index]);
		}
		else if(index < 30){
			printf("%lf ", array4[index]);
		}
		else if(index < 40){
			printf("%lf ", array4[index]);
		}
		else{
			printf("%lf ", array4[index]);
		}
		index++;
	}
	
}

void dimension(){
	int array[50];
	int index = 0, sum, index2;
	
	while(index < 50){
		sum = 0;
		index2 = index;
		while(index2 >= 0){
			sum = sum + index2;
			index2--;
		}
		array[index] = sum;
		printf("A[%d] = %d ", index, array[index]);
		index++;
	}
	
}









