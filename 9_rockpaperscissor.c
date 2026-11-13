#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
  srand(time(NULL));
  printf("###ROCK-PAPER-SCISSORS###\n");

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  switch (userChoice) {
    case 1:
        printf("You chose ROCK\n");
        break;
    case 2:
        printf("You chose PAPER\n");
        break;
    case 3:
        printf("You chose SCISSORS\n");
        break;
  }
  switch (computerChoice) {
    case 1:
        printf("Computer chose ROCK\n");
        break;
    case 2:
        printf("Computer chose PAPER\n");
        break;
    case 3:
        printf("Computer chose SCISSORS\n");
        break;
  }

  checkWinner(userChoice, computerChoice);
  return 0;
}

int getComputerChoice() { return (rand() % (3)) + 1; }

int getUserChoice() {
  int userChoice = 0;
  do {
    printf("Choose an option: \n1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);
  } while (userChoice < 1 || userChoice > 3);
  return userChoice;
}

void checkWinner(int userChoice, int computerChoice) {
  if ((userChoice == 1 && computerChoice == 2) ||
      (userChoice == 2 && computerChoice == 3) ||
      (userChoice == 3 && computerChoice == 1)) {
    printf("YOU LOSE!");
  } else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
    printf("YOU WIN!");
  } else {
    printf("DRAW!");
  }
}