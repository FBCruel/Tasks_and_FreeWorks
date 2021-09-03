#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//game 1 functions
int numberCreator();
int symbolCreator();
int comparision(int cardnum1, int cardsymbol1, int cardnum2, int cardsymbol2);

//game 2 functions
int digitCreator();

int main(void){
	
	int choice, controller = 1; //general variables
	int cardnum1 = 0, cardnum2 = 0, cardsymbol1 = 0, cardsymbol2 = 0, round = 1, generalPoint = 0; //game 1 variables
	int num1, num2, num3, num4, num1g, num2g, num3g, num4g, pcpoint = 20; //game 2 variables
	srand(time(0));
	while(controller = 1){
		printf("1- Play Card Matching\n"
		   	   "2- Play Digit Game\n"
		   	   "3- Quit\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				while(!((cardsymbol1 != cardsymbol2) && ((cardnum1 - cardnum2 == 3) || (cardnum2 - cardnum1 == 3)))){
					printf("round %d\n", round);
					cardnum1 = numberCreator();
					cardsymbol1 = symbolCreator();
					cardnum2 = numberCreator();
					cardsymbol2 = symbolCreator();
					printf("card 1 = %d %d\n", cardnum1, cardsymbol1);
					printf("card 2 = %d %d\n", cardnum2, cardsymbol2);
					if(cardsymbol1 == cardsymbol2){
						generalPoint = generalPoint + cardnum1 + cardnum2;
					}
					else if((cardsymbol1 == 1 && cardsymbol2 == 4) || (cardsymbol1 == 4 && cardsymbol2 == 1)){
						generalPoint = generalPoint + (cardnum1 + cardnum2) / 2;
					}
					printf("total point is %d\n", generalPoint);
					printf("\nresult = %d\n\n",comparision(cardnum1, cardsymbol1, cardnum2, cardsymbol2));
					round++;
				}
				break;
			case 2:
				pcpoint = 20;
				printf("enter 4 different numbers: ");
				scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
				if((num1 != num2 && num1 != num3 && num1 != num4 && num2 != num3 && num2 != num4 && num3 != num4)){
					num1g = digitCreator();
					num2g = digitCreator();
					num3g = digitCreator();
					num4g = digitCreator();
					while(pcpoint > 0 && (num1 != num1g || num2 != num2g || num3 != num3g || num4 != num4g)){
						printf("computer predictions are %d %d %d %d\n", num1g, num2g, num3g, num4g);
						if(num1 == num1g || num1 == num2g || num1 == num3g || num1 == num4g){
							pcpoint += 5;
						}
						else{
							num1g = digitCreator();
							printf("new prediction of digit 1 is %d \n", num1g);
							pcpoint -= 4;
						}
						if(num2 == num1g || num2 == num2g || num2 == num3g || num2 == num4g){
							pcpoint += 5;
						}
						else{
							num2g = digitCreator();
							printf("new prediction of digit 2 is %d \n", num2g);
							pcpoint -= 4;
						}
						if(num3 == num1g || num3 == num2g || num3 == num3g || num3 == num4g){
							pcpoint += 5;
						}
						else{
							num3g = digitCreator();
							printf("new prediction of digit 3 is %d \n", num3g);
							pcpoint -= 4;
						}
						if(num4 == num1g || num4 == num2g || num4 == num3g || num4 == num4g){
							pcpoint += 5;
						}
						else{
							num4g = digitCreator();
							printf("new prediction of digit 4 is %d \n", num4g);
							pcpoint -= 4;
						}
						printf("total point of pc is %d\n\n", pcpoint);
					}
				}
				else{
					printf("please enter different numbers!\n\n");
				}
				break;
			case 3:
				controller = 0;
				break;
			default:
				printf("\nInvalid selection!!\n\n");
				break;
		}
	}
	
	
	return 0;
	
}

int numberCreator(){
	int card;
	card = 1 + rand() %13; 
	
	return card;
}

int symbolCreator(){
	int symbol;
	symbol = 1 + rand() %4; // 1 is clubs, 2 is diamonds, 3 is hearts, 4 is spades
	
	return symbol;
}

int comparision(cardnum1, cardsymbol1, cardnum2, cardsymbol2){
	int result = 0, point = 0;
	if(cardsymbol1 == cardsymbol2){
		point = cardnum1 + cardnum2;
		printf("player gained %d points\n", point);
		result = 1;
	}
	else if((cardsymbol1 == 1 && cardsymbol2 == 4) || (cardsymbol1 == 4 && cardsymbol2 == 1)){
		point = (cardnum1 + cardnum2) / 2;
		printf("player gained %d points\n", point);
		result = 1;
	}
	return result;
}

int digitCreator(){
	int digit;
	digit = 0 + rand() %9;
	
	return digit;
}
