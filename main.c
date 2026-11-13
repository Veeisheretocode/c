#include <math.h>
#include <stdbool.h> //to use boolean data type
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> //to get a sleep function

int main() {
  // tis some text
  /*
  tis some more comment
  */
  // printf("hello world!\n");
  // printf("i like chicken!\n");
  //--------------------------------------------------------------------------------
  // variables and data types and constants maybe
  // int num1 = 2;
  // int num2 = 3;
  // int sum = num1 + num2;
  // printf("sum =%d ",sum);
  //--------------------------------------------------------------------------------

  // float num3 = 5.0;
  // printf("\nthis is %f", num3);

  // char alph = 'C';
  // printf("\nyour grade is %c", alph);

  // char currency = '$';
  // printf("\nThe currency is %c", currency);

  // double pi = 3.14159265358979;
  // printf("\nthis is %.15lf long float number", pi);
  //-------------------------------------------------------------------------------
  // array and strings
  // char name[]= "Veeee Keeee";
  // printf("\nMy name is %s", name);
  //--------------------------------------------------------------------------------
  // boolean 0 =false, 1= true
  // bool isOnline = false;
  // printf("\n%d", isOnline);
  //--------------------------------------------------------------------------------
  // conditional - if-else statement
  // if(isOnline){
  //     printf("\nyou are online!");
  // }
  // else{
  //     printf("\nYou are offline :(");
  // }
  //--------------------------------------------------------------------------------
  //%d - number format specifier
  //%f - float
  //%lf - double/long float
  //%c - char
  //%s - string

  //  int num = 1;
  //  int num1 = 10;
  //  int num2 = -100;

  //  printf("%3d\n",num);
  //  printf("%3d\n",num1);
  //  printf("%3d\n",num2);
  //     printf("\n");
  //  printf("%04d\n",num);
  //  printf("%03d\n",num1);
  //  printf("%03d\n",num2);
  //     printf("\n");
  //  printf("%-4d\n",num);
  //  printf("%4d\n",num1);
  //  printf("%-4d\n",num2);
  //     printf("\n");
  //  printf("%+d\n",num);
  //  printf("%+d\n",num1);
  //  printf("%+d\n",num2);
  //--------------------------------------------------------------------------------

  // width precision and flags

  //  float num = 19.0998;
  //  float num1 = 10.5609;
  //  float num2 = -100.450934;

  //  printf("%+7.3f\n",num);
  //  printf("%+7.3f\n",num1);
  //  printf("%+7.3f\n",num2);
  //     printf("\n");
  //  printf("%.1f\n",num);
  //  printf("%.1f\n",num1);
  //  printf("%.1f\n",num2);
  //     printf("\n");

  //--------------------------------------------------------------------------------
  // operators
  // x+y
  // x-y
  // x*y
  // x/y
  // x%y
  // x++    increment
  // x--    decrement
  // x**y   x sqaure y
  // x+=3   add 3 to x
  // x *=5  x = x*5
  // x-=5   x = x-5

  //--------------------------------------------------------------------------------

  // int num =0;
  // float gpa = 0.0f;
  // char grade= '\0';
  // char name[30]= "Vee Kee";

  // printf("Enter a number:");
  // scanf("%d", &num);

  // printf("Enter your gpa:");
  // scanf("%f", &gpa);

  // printf("Enter your grade:");
  // scanf(" %c", &grade);

  // // printf("Enter your name:");
  // // scanf("%s", &name); //scanf cant read white space so it will only read
  // what you typed before the white space

  // //instead we can use fgets if we wanna store something with whitespaces
  // getchar(); //clears the new line character within the input buffer
  // printf("Enter your full name:");
  // fgets(name, sizeof(name), stdin); //fgets( var, sizeofvar, standard input)
  // name[strlen(name)-1] = '\0'; //adds null terminator at the end of whatever
  // you put in the fgets to clear the newine effect
  // //name = "sham vee\0"

  // printf("Your Name is: %s\n", name);
  // printf("Your number is: %d\n", num);
  // printf("Your GPA is: %f\n", gpa);
  // printf("Your Grade is: %c\n", grade);

  //--------------------------------------------------------------------------------

  // math function

  // int x = 9;
  // int y = sqrt(x);
  // y = pow(x, 3);
  // printf("\n%d\n", y);

  //--------------------------------------------------------------------------------

  // char dayOfWeek = '\0';
  // printf("Enter a day from (M,T,W,B,F,S,R): ");
  // scanf("%s", &dayOfWeek);

  // switch (dayOfWeek) {

  //     case 1:
  //         printf("It is Monday!\n");
  //         break;
  //     case 2:
  //         printf("It is Tuesday!\n");
  //         break;
  //     case 3:
  //         printf("It is Wednesday!\n");
  //         break;
  //     case 4:
  //         printf("It is Thursday!\n");
  //         break;
  //     case 5:
  //         printf("It is Friday!\n");
  //         break;
  //     case 6:
  //         printf("It is Saturday!\n");
  //         break;
  //     case 7:
  //         printf("It is Sunday!\n");
  //         break;
  //     default:
  //         printf("Enter a valid value from 1 to 7.\n");
  // }

  // switch (dayOfWeek) {

  //     case 'M':
  //         printf("It is Monday!\n");
  //         break;
  //     case 'T':
  //         printf("It is Tuesday!\n");
  //         break;
  //     case 'W':
  //         printf("It is Wednesday!\n");
  //         break;
  //     case 'B':
  //         printf("It is Thursday!\n");
  //         break;
  //     case 'F':
  //         printf("It is Friday!\n");
  //         break;
  //     case 'S':
  //         printf("It is Saturday!\n");
  //         break;
  //     case 'R':
  //         printf("It is Sunday!\n");
  //         break;
  //     default:
  //         printf("Enter a valid value.\n");
  // }

  //--------------------------------------------------------------------------------
  // nested ifs

  // float price = 10;
  // bool isStudent = false;
  // bool isSenior = false;

  // if (isStudent) {
  //   if (isSenior) {
  //     printf("You get student discount of 10 percent\n");
  //     printf("You get a senior dicount of 20 percent\n");
  //     printf("Price of ticket : %.2f\n",
  //            price - (price * (0.1) + price * (0.2)));

  //   } else {
  //     printf("You get student discount of 10 perceent.");
  //     printf("Price of ticket : %.2f\n", price - (price * (0.1)));
  //   }
  // } else if (isSenior) {
  //   printf("You get senior discount of 20 percent");
  //   printf("Price of ticket : %.2f\n", price - (price * (0.2)));
  // } else {
  //   printf("You get no discount");
  //   printf("Price of ticket : %.2f\n", price);
  // }

  //--------------------------------------------------------------------------------
  // WHILE LOOP
  // do some code, while the condition remains true
  //  int num = 0;
  //  while(num<=0){
  //    printf("Enter a number: ");
  //    scanf("%d", &num);
  //  }

  // do{
  //   printf("Enter a number: ");
  //   scanf("%d", &num);
  // }while(num<=0); //variation of while loop it executes atleast once

  // bool isRunning = true;
  // char response = '\0';

  // while (isRunning) {
  //   printf("You are playing a game!");
  //   printf("Would you like to continue? : Y(yes), N(No): ");
  //   scanf(" %c", &response);

  //   if(response != 'Y' && response!='y'){
  //     isRunning = false;
  //   }
  // }
  // printf("You exit the game!\n");

  //--------------------------------------------------------------------------------
  // FOR LOOP - to repeat a code limited numbers of times
  //  for (int i=10; i>=0; i--) {
  //    sleep(1);
  //    printf("%d\n", i);
  //  }
  //  printf("HAPPY NEW YEAR!\n");
  //--------------------------------------------------------------------------------
  // break break out of the loop
  // continue = skip current loop
  //--------------------------------------------------------------------------------
  // nested FOR LOOPS
  // outer loop- rows
  // inner loop - cloumns
  //--------------------------------------------------------------------------------
  // RAND FUNCTUON - generates random numbers

  // printf("%d\n", rand()); //will generate same number

  srand(time(NULL));
  // printf("%d", rand());
  // RAND_MAX()generates maximum number as per your operating system.

  // to get random numbers in a given range
  //  int min = 50;
  //  int max = 100;

  // int randomNum = (rand() % (max - min +1)) + min;

  // printf("%d\n", randomNum);

  // to get multipke random numbers-
  int min = 50;
  int max = 100;

  int randomNum1 = (rand() % (max - min + 1)) + min; // formula to create a pseudo random number
  int randomNum2 = (rand() % (max - min + 1)) + min;
  int randomNum3 = (rand() % (max - min + 1)) + min;

  printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  return 0;
}