#include <stdio.h>
#include <stdlib.h>

int printMainMenu();
void printStockInformation(int RR, int PR, int WR, int YR, int BR);
int updateStocks(int RR, int PR, int WR, int YR, int BR);

int RR = 0, PR = 0, WR = 0, YR = 0, BR = 0;

int main(void){
	int selection, controller = 1;
	while(controller == 1){
		selection = printMainMenu();
	
		switch(selection){
			case 1:
				printStockInformation(RR, PR, WR, YR, BR);
				break;
			case 2:
				updateStocks(RR, PR, WR, YR, BR);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				controller = 0;
				break;
		}	
	}
	
	
	
	
	
return 0;
}

int printMainMenu(){
	int selection;
	printf("\n____________\n\n"	
		   " OPERATIONS \n"
		   "____________\n"
		   "1. Stock Info\n"
		   "2. Update Stocks\n"
		   "3. Update Prices\n"
		   "4. Sell\n"
		   "5. Current cash info\n"
		   "6. Quit\n\n"
		   "Select your operation: ");
		   scanf("%d", &selection);
	
	switch(selection){
		case 1: 
			selection=1;
			break;
		case 2: 
			selection=2;
			break;
		case 3:
			selection=3;
			break;
		case 4:
			selection=4;
			break;
		case 5:
			selection=5;
			break;
		case 6:
			selection=6;
			break;
		default:
			break;
	}
return selection;
}
void printStockInformation(RR, PR, WR, YR, BR){
	printf("\n1. Red Rose: %d", RR);
	printf("\n2. Pink Rose: %d", PR);
	printf("\n3. White Rose: %d", WR);
	printf("\n4. Yellow Rose: %d", YR);
	printf("\n5. Black Rose: %d", BR);

}
int updateStocks(RR, PR, WR, YR, BR){
	int product, stock;
	
	printf("\n1. Red Rose: %d", RR);
	printf("\n2. Pink Rose: %d", PR);
	printf("\n3. White Rose: %d", WR);
	printf("\n4. Yellow Rose: %d", YR);
	printf("\n5. Black Rose: %d", BR);
	
	printf("\nSelect product: ");
	scanf("%d", &product);
	printf("Enter stock for Pink Rose product: ");
	scanf("%d", &stock);
	switch(product){
		case 1: 
			RR += stock;
			break;
		case 2: 
			PR += stock;
			break;
		case 3:
			WR += stock;
			break;
		case 4:
			YR += stock; 
			break;
		case 5:
			BR += stock;
			break;
		default:
			break;
	}
}









