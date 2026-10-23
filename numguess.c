#include <stdio.h>
int number = 13;
int guess;
int score;
int attempts = 5;
int main() {
    printf("welcome to the game\n");
    printf("you have five attempts to guess the number between 0 to 20\n");
    while (attempts > 0) {
        printf("enter your guess here : ");
        scanf("%d", &guess);
        if (guess == number) {
            printf("you guessed the number correctly\n");
        break;
        } else if (guess < number) {
            printf("your guess is too low\n");
        } else {
            printf("your guess is too high\n");
        }
    attempts--;
    
         printf("attempts left: %d\n\n",attempts);
        }

        if (guess != number) {
            printf("\ngame over! The number was %d.\n", number);
            printf("your score: 0\n");
        }
    printf("\nthanks for playing!\n");
    printf("your score: %d\n", score = attempts * 10);

    return 0;
}