#include <stdio.h>
#include<string.h>
#include <stdbool.h>

int main() {

  char item[30] = "";
  float price = 0.0f;
  int numItems = 0;
  char currency = '$';

  printf("What item would you like to buy? ");
  fgets(item, sizeof(item),stdin);
  item[strlen(item)-1] = '\0';

  printf("What is the price for each? ");
  scanf("%f", &price);

  printf("How many would you like to buy? ");
  scanf("%d", &numItems);

  printf("You have baught %d %ss\n", numItems, item);
  printf("Your total is: %c%.2f\n", currency, price*numItems);

  return 0;
}