#include <stdio.h>
#include <unistd.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
  int userChoice = 0;
  float balance = 0.0f;
  printf("### WELCOME TO THE BANK ###\n");

  do {
    printf("Select an option:\n1. Check Balance\n2. Deposit Money\n3. Withdraw "
           "Money\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    switch (userChoice) {
    case 1:
      checkBalance(balance);
      break;
    case 2:
      balance = balance + deposit();
      break;
    case 3:
      balance = balance - withdraw(balance);
      break;
    case 4:
      printf("Thankyou for using the bank!\n");
      break;
    default:
      printf("Invalid choice. Please enter a valid choice from given list.\n");
      break;
    }
  } while (userChoice != 4);


return 0;
}

float withdraw(float balance) {
  float amtWithdrawn = 0.0f;
  do {
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amtWithdrawn);

    if (amtWithdrawn > balance) {
      printf("Insufficient funds, your balance is $%.2f\n", balance);
    } else if (amtWithdrawn < 0) {
      printf("Invalid choice, enter a valid number.\n");
    } else if (amtWithdrawn <= balance) {
      printf("Succesfully withdrew $%.2f\n", amtWithdrawn);
    }
  } while (amtWithdrawn > balance || amtWithdrawn < 0);
  return amtWithdrawn;
}

void checkBalance(float balance) { printf("Your balance is $%.2f\n", balance); }

float deposit() {
  float depositamt = 0.0f;

  printf("Enter the amount to deposit: $");
  scanf("%f", &depositamt);
  printf("You have succesfully deposited $%.2f\n", depositamt);

  return depositamt;
}