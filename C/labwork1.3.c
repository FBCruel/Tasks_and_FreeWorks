#include <stdio.h>
#include <math.h>

int main(void){
	/*
	//question1
	char type;
	float hour;
	printf("Input the type of vehicle (c for car, b for bus, t for truck): ");
	scanf("%c", &vType);
	printf("Input the hour(s) spent: ");
	scanf("%f", &hour);
	
	if(vType == 'c'){
		printf("%.1f tl\n", hour * 2);
	}
	else if(vType == 'b'){
		printf("%.1f tl\n", hour * 3);
	}
	else if(vType == 't'){
		printf("%.1f tl\n", hour * 4);
	}
	
	//question2
	float chargeValue;
	printf("enter the value of charge: ");
	scanf("%f", &chargeValue);
	
	if(chargeValue <= 300){
		printf("%.1f cents\n", chargeValue * 9);
	}
	else if(chargeValue > 300 && chargeValue <= 600){
		printf("%.1f cents\n", chargeValue * 8);
	}
	else if(chargeValue > 600 && chargeValue <= 1000){
		printf("%.1f cents\n", chargeValue * 6);
	}
	else if(chargeValue > 1000){
		printf("%.1f cents\n", chargeValue * 5);
	}
	
	char pType;
	int projects;
	printf("Input the project type (s for small, m for medium, l for large): ");
	scanf("%c", &pType);
	printf("Input the number of projects: ");
	scanf("%d", &projects);
	
	if(pType == 's'){
		if(projects < 3){
			printf("%d$\n", projects * 1500);
		}
		else if(projects >= 3 && projects <= 5){
			printf("%d$\n", projects * 1000);
		}
		else if(projects > 5){
			printf("%d$\n", projects * 750);
		}
	}
	else if(pType == 'm'){
		if(projects < 3){
			printf("%d$\n", projects * 2500);
		}
		else if(projects >= 3 && projects <= 5){
			printf("%d$\n", projects * 2000);
		}
		else if(projects > 5){
			printf("%d$\n", projects * 1750);
		}
	}
	else if(pType == 'l'){
		if(projects < 3){
			printf("%d $\n", projects * 4500);
		}
		else if(projects >= 3 && projects <= 5){
			printf("%d$\n", projects * 4000);
		}
		else if(projects > 5){
			printf("%d$\n", projects * 3500);
		}
	}
	*/
	char fruit;
	int item;
	printf("Input the fruit type (a for apples, b for bananas, c for carrots): ");
	scanf("%c", &fruit);
	printf("Input the number of items: ");
	scanf("%d", &item);
	
	if(fruit == 'a'){
		printf("total cost is %d cent\n", item * 10);
	}
	else if(fruit == 'b'){
		printf("total cost is %d cent\n", item * 12);
	}
	else if(fruit == 'c'){
		printf("total cost is %d cent\n", item * 7);
	}
	else{
		printf("invalid character choice\n");
	}
	
	switch(fruit)
	{
		case 'a':
			printf("total cost is %d cent\n", item * 10);
			break;
		case 'b':
			printf("total cost is %d cent\n", item * 12);
			break;
		case 'c':
			printf("total cost is %d cent\n", item * 7);
			break;
		default:
			printf("invalid character choice\n");
	}

	
	
	return 0;
}
