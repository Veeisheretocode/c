#include <stdbool.h> //to use boolean data type
#include <stdio.h>

int main() {
    int maxScore = 4;
    int playerScore = 0;
  printf("\n### QUIZ GAME ###\n");

  char questions[4][100] = {"\nWhich is the LARGEST planet in solar system?\n",
                            "\nWhich is the HOTTEST planet in solar system?\n",
                            "\nWhich planets has MOST MOONS\n",
                            "\nIs the earth FLAT?\n"};

  char options[4][100] = {"A. Jupiter\nB. Saturn\nC.Uranus\nD.Neptune\n",
                          "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                          "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
                          "A. Yes\nB. No\nC. Maybe\nD. Sometimes\n"};

  char answerKey[5] = {'A', 'B', 'C', 'B'};

  char playerChoice[5] = {0};

  for (int i = 0; i < 4; i++) {
    printf("%s", questions[i]);
    printf("%s", options[i]);
    printf("Enter you answer: ");
    scanf("%s", &playerChoice[i]);
    if (playerChoice[i] == answerKey[i]) {
      printf("CORRECT!\n");
      playerScore++;
    } else {
      printf("INCORRECT!\n");
    }
  }

  printf("\nYour score is %d out of %d!\n", playerScore, maxScore);
  return 0;
}