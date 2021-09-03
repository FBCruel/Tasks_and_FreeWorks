#include <stdio.h>
#include <stdlib.h>

void question1(array1);


int main(void){
	
	//question1
	int array1[30], array2[30], N, N1, N2, number1, number2, index1 = 0, index2 = 0;
	
	printf("enter a limit for arrays(max 30): ");
	scanf("%d", &N);
	N1 = N;
	N2 = N;
	printf("enter %d integers to fill first array: ", N);
	while(N1 > 0){
		scanf("%d", &number1);
		array1[index1] = number1;
		index1++;
		N1--;
	}
	printf("enter %d integers to fill second array: ", N);
	while(N2 > 0){
		scanf("%d", &number2);
		array2[index2] = number2;
		index2++;
		N2--;
	}

	
	
	
	return 0;
}
void question1(array1[], array2[]){
	
	
}

