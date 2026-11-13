#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {

  srand(time(NULL)); // seed
  int min = 1;
  int max = 100;
  int tries = 0;
  int guess = 0;
  int answer = (rand() % (max - min + 1)) + min;

  printf("###NUMBER GUESSING GAME###\n");

  do {
    printf("Guess a number between 1-100: ");
    scanf("%d", &guess);
    tries++;

    if (guess < answer) {
      printf("TOO LOW!\n");
    } else if (guess > answer) {
      printf("TOO HIGH\n");
    }
    else {
     printf("CORRECT!\n");
    }
  } while (guess != answer);

  printf("You guessed the number correctly! The answer is %d !\n", answer);
  printf("You guessed it in %d tries!\n", tries);
  printf("YOU WIN!\n");
  return 0;
}