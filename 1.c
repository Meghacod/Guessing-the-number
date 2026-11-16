#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int random,guess;
	int number_of_guess=0;
	srand(time(NULL));
	printf("Welcome to the game of guessing numbers:\n");
	random= rand()%100+1; 
	do{
		printf("Please enter your number between 1to 100\n");
		scanf("%d",&guess);
			number_of_guess++;
		if(guess<random){
			printf("Guess a larger number\n");
		}	
		else if(guess>random){
			printf("Guess a smaller number\n");
		}
		else{
			printf("Congratualtions! you have guessed the number\n");
		}
	}while(guess!=random);
	return 0;
}

