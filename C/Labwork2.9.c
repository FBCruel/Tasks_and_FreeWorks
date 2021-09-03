#include <stdio.h>
#include <stdlib.h>

void question1();

void question3();

int main(void){
//question1
//question1();

//question3	
question3();

return 0;
}
void question1(){
	char array[70], letter;
	int index = 0, word = 1;
	
	printf("Enter a sentence(with '.' to end of): ");
	while(index < 70){
		scanf("%c", &letter);
		array[index] = letter;
		index++;
		if(letter == '.'){
			index = 70;
		}
	}
	index = 0;
	printf("word %d: ", word);
	while(index < 70){
		if(array[index] == '.'){
			index = 70;
		}
		else if(array[index] != ' '){
			printf("*");	
		}
		else{
			printf("\n");
			word++;
			printf("word %d: ", word);
		}
		index++;
	}
}
void question3(){
	char array[50], letter;
	int index = 0, counter = 0, oldc = 50, holder, a;
	
	printf("\n\nEnter a sentence(with '.' to end of): ");
	while(index < 50){
		scanf("%c", &letter);
		array[index] = letter;
		index++;
		if(letter == '.'){
			index = 50;
		}
	}
	index = 0;
	while(index < 50){
		if(array[index] == '.'){
			index = 50;
		}
		else if(array[index] != ' '){
			counter++;
			if(counter < oldc){
				oldc = counter;
				holder = index - oldc; 
				printf("%d, %d", holder, index);
			}
		}
		else{
			counter = 0;
		}
		index++;
	}
	a = holder + oldc;
	while(holder < a){
		printf("%c", array[holder]);
		holder++;
	}
}






