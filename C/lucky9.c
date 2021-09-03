#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rules();

int main(void){
	int selection, controller = 1, round, p1c, p2c, p1p = 0, p2p = 0, set3p1 = 0, set3p2 = 0, set5p1, set5p2, set9p1 = 0, set9p2 = 0, p1p5 = 0, p2p5 = 0, p1p9 = 0, p2p9 = 0;
	srand(time(0));
	while(controller == 1){ //controller variable is defined 1, this runs the app until occur the quit contidions
			printf("1- Start a New Game\n"
           		   "2- Display Rules\n"
             	   "3- Quit\n\n: ");
    		scanf("%d", &selection); //selects the function
		switch(selection){
		case 1:
			round = 1;
			p1p = 0; // player 1 point
			p2p = 0; //player 2 point 
			while(round <= 5 && p1p < 30 && p2p < 30){
				printf("\nRound %d:\n", round); //prints the round number
				p1c = rand() % 12 + 1; //gets the card for player 1
				p2c = rand() % 12 + 1; //gets the card for player 2
				printf("Player 1 draws %d.\n", p1c); 
				
				if(p1c % 2 == 0){ //checks the card number if it is even number or not
					if(p1c == 12){ //cheks the card number if it is 12 or not
						p1p = p1p + 12; //player gets 12 points
						printf("Player 1 gets 12 points.\n");
					}
					else{
						p1p = p1p + 3; //player gets 3 points for all even numbers except 12
						printf("Player 1 gets 3 points.\n");
					}
				}
				else if(p1c == 3){ //cheks the card number if it is 3 or not
					set3p1 = 0; //condition p1c == 3 controller
					printf("Player 1 draws ");
					while(set3p1 < 3){
						p1c = rand() % 12 + 1; //gets the card for player 1
						printf("%d ", p1c);
						if(p1c == 9){ //checks the one of the cards is 9 or not
							p1p = p1p + 9; //player gets 9 points
							printf("\nPlayer 1 gets 9 points.");
						}
						set3p1++; //controller increases 1 in every loop
					}
					printf("\n");	
				}
				else if(p1c == 5){ //cheks the card number if it is 5 or not
					set5p1 = 1; //condition p1c == 5 controller
					printf("Player 1 draws "); 
					while(set5p1 == 1){ 
						p1c = rand() % 12 + 1; //gets the card for player 1
						printf("%d ", p1c);
						p1p = p1p + 1; //adds 1 point to player 1 point
						p1p5++; //calculates the total point
						if(p1c == 9){ //checks the card is 9 or not
							printf("\nPlayer 1 gets %d points.\n", p1p5);
							p1p5 = 0; //prepare the variable for next round
							set5p1 = 0; //makes 0 the variable to finish loop
						}
					}
				}
				else if(p1c == 9){ //cheks the card number if it is 9 or not
					set9p1 = 0; //condition p1c == 9 controller
					printf("Player 1 draws ");
					while(set9p1 < 2){
						p1c = rand() % 12 + 1; //gets the card for player 1
						printf("%d ", p1c);
						p1p = p1p + p1c; //player 1 point increases by the card number
						p1p9 = p1p9 + p1c; //calculates the total point
						set9p1++; //while controller increases 1 in every loop
					}
					printf("\nPlayer 1 gets %d points\n", p1p9);	
				}
				else{ //all odd numbers except 3, 5, 9 go inside this loop
					if(p1c > 1){
						printf("Player 1 gets %d points.\n", p1c);
					}
					else{ //if number is 1, prints "point" for this special situation
						printf("player 1 gets 1 point.\n");
					}
					p1p = p1p + p1c; //player 1 point increases by the card number
				}
				printf("Player 2 draws %d.\n", p2c);
				if(p2c % 2 == 0){ //checks the card number if it is even number or not
					if(p2c == 12){ //cheks the card number if it is 12 or not
						p2p = p2p + 12;  //player gets 12 points
						printf("Player 2 gets 12 points.\n");
					}
					else{
						p2p = p2p + 3; //player gets 3 points for all even numbers except 12
						printf("Player 2 gets 3 points.\n");
					}
				}
				else if(p2c == 3){ //cheks the card number if it is 3 or not
					set3p2 = 0; //condition p2c == 3 controller
					printf("Player 2 draws ");
					while(set3p2 < 3){
						p2c = rand() % 12 + 1;  //gets the card for player 2
						printf("%d ", p2c);
						if(p2c == 9){ //checks the one of the cards is 9 or not
							p2p = p2p + 9;  //player gets 9 points
							printf("\nPlayer 1 gets 9 points.");
						}
						set3p2++; //controller increases 1 in every loop
					}
					printf("\n");	
				}
				else if(p2c == 5){ //cheks the card number if it is 5 or not
					set5p2 = 1; //condition p2c == 5 controller
					printf("Player 2 draws ");
					while(set5p2 == 1){
						p2c = rand() % 12 + 1; //gets the card for player 2
						printf("%d ", p2c);
						p2p = p2p + 1;
						p2p5++;
						if(p2c == 9){
							printf("\nPlayer 2 gets %d points.\n", p2p5);
							p2p5 = 0; //prepare the variable for next round
							set5p2 = 0; //makes 0 the variable to finish loop
						}
					}
				}
				else if(p2c == 9){ //cheks the card number if it is 9 or not
					set9p2 = 0; //condition p2c == 9 controller
					printf("Player 2 draws ");
					while(set9p2 < 2){
						p2c = rand() % 12 + 1; //gets the card for player 2
						printf("%d ", p2c);
						p2p = p2p + p2c;  //player 2 point increases by the card number
						p2p9 = p2p9 + p2c; //calculates the total point
						set9p2++; //while controller increases 1 in every loop
					}
					printf("\nPlayer 2 gets %d points.\n", p2p9);
				}
				else{ //all odd numbers except 3, 5, 9 go inside this loop
					if(p2c > 1){
						printf("Player 2 gets %d points.\n", p2c);
					}
					else{ //if number is 1, prints "point" for this special situation
						printf("player 2 gets 1 point.\n");
					}
					p2p = p2p + p2c;  //player 2 point increases by the card number
				}
				
				printf("Player 1: %d	  ", p1p); 
				printf("Player 2: %d\n\n", p2p);
				//prints player 1 point and player 2 point when round finished
				round++; //round number increases by 1 after each round
			}
			printf("\nGame over!");
			/* makes the post-game point comparison */
			if(p1p > p2p){
				printf("\nPlayer 1 wins with %d points, and game lasted for %d rounds\n\n", p1p, round - 1);
			}
			else if(p2p > p1p){ 
				printf("\nPlayer 2 wins with %d points, and game lasted for %d rounds\n\n", p2p, round - 1);
			}
			else{
				printf("Tie!\n\n");
			}
			break;
		case 2: 
			rules(); //runs the function which is "rules()"
			break;
		case 3:
			printf("\n\nGoodbye!");
			controller = 0; //controller variable becomes 0, this quits the application
			break;
		default: // cheks the input is valid or not
			printf("\nInvalid selection!!\n\n");
			break;
		}
	}
	return 0;
}
void rules(){ // this function includes rules
	printf("\n--All even-numbered cards are worth 3 points except for 12, which is worth 12 points.\n"
		   "--If a player draws 3, they draw 3 more cards. If one of them is equal to 9, they get 9"
		   " points; otherwise, they do not get any points.\n"
		   "--If a player draws 5, they draw cards until they draw a 9. They get as many points as"
		   "the number of cards they have drawn after the 5.\n"
		   "--If a player draws 9, they draw 2 cards, and the number of points they get is equal to"
		   "the sum of those 2 cards.\n"
		   "--If the card player draws is not one of the above, they get as many points as the card"
		   "they draw\n\n\n");
}

