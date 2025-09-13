#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
baslangic:
    int num = rand() % 101;
    printf("\nGuess a number between 0 and 100:");        
    int count = 0;
    while (1){
        count += 1;
        int guess;
        scanf("%d", &guess);
        if (guess == num){
            printf("Congrats! You guess the right number.");
            break;
        }
        else if(guess < num){
            printf("Wrong guess. Try again and guess higher:");
            continue;
        }
        else if(guess > num){
            printf("Wrong guess. Try again and guess lower:");
            continue;
        }
    }
    char cont;
    printf("\nYou tried %d times.", count);
son:
    printf("\nDo you wanna play again? (Y/N)");
    scanf(" %c", &cont);
    if (cont == 'Y'){
        printf("\nStarting again...");
        goto baslangic;
    }
    else if(cont == 'N'){
        printf("\nShutting down...");
    }
    else{
        printf("\nWrong Input! Please try again:");
        goto son;
    }
        return 0;
}