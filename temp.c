#include <stdbool.h> //to use boolean data type
#include <stdio.h>

int main() {
    int maxScore = 4;
    int playerScore = 0;
  printf("\n### QUIZ GAME ###\n");

  char questions[4][100] = {"Which is the LARGEST planet in solar system?\n",
                            "Which is the HOTTEST planet in solar system?\n",
                            "Which planets has MOST MOONS\n",
                            "Is the earth FLAT?\n"};

  char options[4][100] = {"A. Jupiter B. Saturn C.Uranus D.Neptune\n",
                          "A. Mercury B. Venus C. Earth D. Mars\n",
                          "A. Earth B. Mars C. Jupiter D. Saturn\n",
                          "A. Yes B. No C. Maybe D. Sometimes\n"};

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

  printf("Your score is %d out of %d\n", playerScore, maxScore);
  return 0;
}