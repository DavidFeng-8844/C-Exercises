#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int number, guess, tries = 0;
  
  srand(time(0)); // seed the random number generator
  number = rand() % 100 + 1; // generate a random number between 1 and 100
  
  printf("I have a number between 1 and 100.\n");
  printf("Can you guess my number?\n");
  
  do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    tries++;
    
    if (guess > number) {
      printf("Too high. Try again.\n");
    } else if (guess < number) {
      printf("Too low. Try again.\n");
    }
  } while (guess != number);
  
  printf("You guessed it in %d tries!\n", tries);
  return 0;
}