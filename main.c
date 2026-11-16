#include <inttypes.h>
// #include <math.h>
#include <stdbool.h> //to use boolean data type
#include <stdio.h>
// #include <stdlib.h>
#include <stdlib.h> //required for malloc
#include <string.h>
// #include <time.h>
#include <unistd.h> //to get a sleep function

// void birthday(int *age);
// enum Day{
//   Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6,
//   Saturday=7
// };

// typedef enum{
//   Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6,
//   Saturday=7
// }Day;

// struct Student {

//   char name[50];
//   int age;
//   float gpa;
//   bool isFUllTIme;
// };

// typedef struct {

//   char name[50];
//   int age;
//   float gpa;
//   bool isFUllTIme;
// } Student;

// typedef struct {
//   char model[25];
//   int year;
//   int price;
// } Car;

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

  // srand(time(NULL));
  // printf("%d", rand());
  // RAND_MAX()generates maximum number as per your operating system.

  // to get random numbers in a given range
  //  int min = 50;
  //  int max = 100;

  // int randomNum = (rand() % (max - min +1)) + min;

  // printf("%d\n", randomNum);

  // to get multipke random numbers-
  // int min = 50;
  // int max = 100;

  // int randomNum1 = (rand() % (max - min + 1)) + min; // formula to create a
  // pseudo random number int randomNum2 = (rand() % (max - min + 1)) + min; int
  // randomNum3 = (rand() % (max - min + 1)) + min;

  // printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);

  //--------------------------------------------------------------------------------
  // ARRAYS

  // int numbers[5] = {10, 20, 30, 40, 50};
  // char grades[5] = {'A', 'B', 'C', 'D', 'E'};
  // char name[] = "Vee Kee";

  // numbers[0] = 100;
  // in c we can go out of bounds it will just throw a garbage value, meanwhile
  // in other language we get error.
  //  printf("%d\n", numbers[0]);
  //  printf("%c\n", grades[3]);
  //  printf("%c\n",name[4]);

  // printf("%d\n", sizeof(numbers));
  // printf("%d\n",sizeof(numbers[0]));
  // int size = sizeof(numbers) / sizeof(numbers[0]);
  // printing entire array
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", numbers[i]);
  // }

  // user input in arrays
  // int nums[5] = {0};
  // int size = sizeof(nums) / sizeof(nums[0]);

  // for (int i = 0; i < size; i++) {
  //   printf("Enter a number: ");
  //   scanf("%d", &nums[i]);
  // }
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", nums[i]);
  // }
  // printf("\n");
  //--------------------------------------------------------------------------------
  // 2D ARRAYS
  // ARRAYS WITH i,j(row, column) indices.
  // ex- [1 , 4, 7] index of 1 is 00, 4- 01, 7- 02
  // ex- [2 , 5, 8] index of 2 is 10, 5- 11, 8- 12
  // ex- [3 , 6, 9] index of 3 is 20, 6-21, 9- 22

  // int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int size = sizeof(numbers) / sizeof(numbers[0]);
  //  printf("%d\n", numbers[0][2]);
  // //in multi-d arrays you cant just leave the value of columns empty, you
  // have to assign it a size for (int i = 0; i < size; i++) {
  //   for (int j=0; j<size; j++) {
  //     printf("%d ", numbers[i][j]);
  //   }
  // }
  // printf("\n");

  //--------------------------------------------------------------------------------
  // ARRAY OF STRINGS IN C
  // char fruits[][10] = {"Apple", "Banana", "Coconut"};

  // char fruit[][10] = {{'A', 'p', 'p', 'l', 'e'},
  //                     {'B', 'a', 'n', 'a', 'n', 'a'},
  //                     {'C', 'o', 'c', 'o', 'n', 'u', 't'}};
  // // concetually the above two arrays are the same in a way
  // int size = sizeof(fruits) / sizeof(fruits[0]);
  // fruits[0][0] = 'P';
  // for (int i = 0; i < size; i++) {
  //   printf("%s ", fruits[i]);
  // }
  // printf("\n");

  /// exercise - 1d string array
  // char names[3][25] = {0};
  // int size = sizeof(names) / sizeof(names[0]);
  // for (int i = 0; i < size; i++) {

  //   printf("Enter a name: ");
  //   fgets(names[i], sizeof(names[i]), stdin);
  //   names[i][strlen(names[i]) - 1] = '\0';
  // }
  // printf("\n");
  // for (int i = 0; i < size; i++) {
  //   printf("%s, ", names[i]);
  // }
  // printf("\n");
  // output- {"hey pal", "yo lo", "how dy"}

  //--------------------------------------------------------------------------------
  // TERNARY OPERATOR

  //(condition) ? result-if-true : result-if-false;
  // int a =1;

  //(a>10) ? printf("a is greater than 10\n") : printf("a is Smaller
  // than 10.\n");
  //--------------------------------------------------------------------------------
  // typedef = gives a new nickname to an already existing data type
  // used to simplify complex data types and improves code readability
  // typedef existing_name new_name;

  // typedef int number ;
  // typedef char letter ;

  // number b = 1;
  // printf("%d\n", b);

  // letter grade = 'F';
  // printf("%c\n", grade);

  // letter arr[6] = {"Apple"};
  // printf("%c\n", arr[4]);
  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------
  // enums
  // user defined data types that consist of a SET of named integer constant.
  // benefits- replace numbers with readable names
  // ex- SUNDAY = 0;
  //  enum Day today = Monday;
  //  Day today = Monday;
  //  printf("%d\n", today);

  //--------------------------------------------------------------------------------
  // STRUCT- Custom container that hold multiple pieces of related information
  // similar to objects in other programming language
  // struct Student student1 = {"Spongebob", 30, 4.5, true};
  // Student student1 = {"Spongebob", 30, 4.5, true};
  //   printf("%s\n", student1.name);
  //   printf("%d\n", student1.age);
  //   printf("%.2f\n", student1.gpa);
  //  printf("%s\n", (student1.isFUllTIme) ? "Yes":"No");

  // Student student2 = {"Patrick", 32, 4.9, false};
  //    printf("\n%s\n", student2.name);
  //   printf("%d\n", student2.age);
  //   printf("%.2f\n", student2.gpa);
  //  printf("%s\n", (student2.isFUllTIme) ? "Yes":"No");

  // Student student3 = {0};
  // strcpy(student3.name, "Squidward");
  // student3.age = 28;
  // student3.gpa = 5.0;
  // student3.isFUllTIme = true;
  //    printf("\n%s\n", student3.name);
  //   printf("%d\n", student3.age);
  //   printf("%.2f\n", student3.gpa);
  //  printf("%s\n", (student3.isFUllTIme) ? "Yes":"No");
  //--------------------------------------------------------------------------------

  // ARRAYS OF STRUCTS- ARRAY where each element contains a struct{}
  // helps in orgniing and grouping together the related data

  // Car cars[] = {{"Mustang", 2025, 32000},
  //               {"Corvette", 2026, 62000},
  //               {"Challenger", 2024, 29000},
  //               {"Nano", 2012, 12000}};

  // int number = sizeof(cars) / sizeof(cars[0]);

  // for (int i = 0; i < number; i++) {
  //   printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
  // }
  //--------------------------------------------------------------------------------
  // pointers= a variable that stroes the meory address of another variable.
  // benefits: they help avoid wasting memory by allowing you to pass the
  // address of large ds instead of copying entire data.
  // basically we are pointing at the address of the data so we can directly
  // access it from there instead of copying and accessing the entire data

  // int age = 25;
  // printf("%d\n", &age); //&age = memory address where the data of age is
  // stored printf("%d\n", age);  // age= data

  // int *pAge = &age; // pointer pAge is now storing the memory address of age
  // printf("%d\n", pAge); //pAge = memory address
  // printf("%d\n", *pAge); //*pAge = stores data

  // int age = 25;
  // int *pAge = &age;

  // // birthday(age);
  // birthday(pAge); // to make changes in ACTUAL value we will pass pointer to
  // our
  //                 // variable

  // printf("You are %d years old\n", age);
  //--------------------------------------------------------------------------------
  // WRITE INTO A FILE USING C

  // FILE *pFile = fopen("output.txt", "w"); //w = write mode

  // char text[] = "OH MY GOSH!\nDONT YOU KNOW IM A SAVAGE?\n";

  // if(pFile == NULL){
  //   printf("Eroor opening file\n");
  //   return 1; //exit code for error
  // }

  // fprintf(pFile, "%s", text);
  // printf("file was written successfully!\n");

  // fclose(pFile); //dont forget to close the file at the end

  //--------------------------------------------------------------------------------
  // READ A FILE IN C
  // FILE *pFile = fopen("input.txt", "r"); // r = read file
  // char buffer[1024] = {0};               // 1kb this buffer will temp store
  // data

  // if (pFile == NULL) {
  //   printf("Could not open the file\n");
  //   return 1;
  // }

  // while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
  //   printf("%s", buffer); // will print whatever is inside the buffer
  // }
  // fclose(pFile);
  //--------------------------------------------------------------------------------
  // malloc()- a fucntion in c that dynamically allocates a specified number of
  // bytes in memory

  // int number = 0;
  // printf("Enter the number of grades: ");
  // scanf("%d", &number);
  // char *grades = malloc(number * sizeof(char)); // how much space we
  // reserving
  // // we reserve memory from heap, borrowing or renting of sorts
  // if (grades == NULL) {
  //   printf("Memory allocation failed!\n");
  //   return 1;
  // }

  // for (int i = 0; i < number; i++) {
  //   printf("Enter grade #%d: ", i + 1);
  //   scanf(" %c", &grades[i]);
  // }

  // for (int i = 0; i < number; i++) {
  //   printf(" %c ", grades[i]);
  // }

  // free(grades); // we are gonna free up the space after we are done using it
  // and
  //               // dont need it anymore
  // grades = NULL; // when we no longer use it
  // if we dont set it to null it becomes a dangling pointer
  //  we gotta avoid dangling pointer
  // we dont want a pointer to take up space in memory wen we are not using it
  // anymore

  //--------------------------------------------------------------------------------
  // Calloc() = contiguous allocation
  //  allocates memory dynamically and set all allocated bytes to 0.
  // malloc() is faster but calloc() leads to less bugs
  // calloc(#, size)
  //  int number = 0;
  //  printf("ENter the number of players: ");
  //  scanf("%d", &number);

  // int *scores = calloc(number, sizeof(int));

  // if(scores==NULL){
  //   printf("Memory allocation failed");
  //   return 1;
  // }

  // for (int i =0; i<number; i++) {
  //  printf("Enter score #%d: ", i+1);
  //  scanf("%d", &scores[i]);
  // }
  // for (int i =0; i<number; i++) {
  //  printf("%d ", scores[i]);
  // }
  // //
  // free(scores);
  // scores = NULL;

  //--------------------------------------------------------------------------------
  // realloc() = reallocation
  // resize previously allocated memories
  // realloc(ptr, bytes);
  // behaves similarly to dynamic array

  int number = 0;
  printf("Enter the number of products: ");
  scanf("%d", &number);

  float *prices = malloc(number * sizeof(float));
  if (prices == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter price #%d :", i + 1);
    scanf("%f", &prices[i]);
  }
  int newNum = 0;
  printf("Enter a new number of prices: ");
  scanf("%d", &newNum);

  float *temp = realloc(
      prices, newNum * sizeof(float)); // realloc will also freee old memory
  if (temp == NULL) {
    printf("COuld not reallocate memory\n");
    // no need return 1
  } else {
    prices = temp;
    // temp = NULL; //not always necessary

    for (int i = number; i < newNum; i++) {
      printf("Enter price #%d :", i + 1);
      scanf("%f", &prices[i]);
    }
    for (int i = 0; i < newNum; i++) {
      printf("$%.2f ", prices[i]);
    }
  }

  free(prices);
  prices = NULL;
  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------

  return 0;
}
// pass by value
//  void birthday(int age){
//    age++;
//    //this wont work cause here we are passing by value
//    //meaning what we are passing to this function is copy of the value not
//    actual value
//    //so the changes that we'll make will happen to the copy not the original
//    value

// }

// pass by refrence
// void birthday(int *age) { (*age)++; }