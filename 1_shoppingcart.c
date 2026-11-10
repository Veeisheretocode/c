#include <stdio.h>
#include<string.h>
#include <stdbool.h>

int main() {

  char item[30];
  float price;
  int numItems;

  printf("What item would you like to buy? ");
  fgets(item, sizeof(item),stdin);
  item[strlen(item)-1] = '\0';

  printf("What is the price for each? ");
  scanf("%f", &price);

  printf("How many would you like to buy? ");
  scanf("%d", &numItems);

  printf("You have baught %d %ss\n", numItems, item);
  printf("YOur total is: %.2f\n", price*numItems);

  return 0;
}