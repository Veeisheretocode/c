#include<stdio.h>
#include<stdbool.h> //to use boolean data type
#include<string.h>
#include<math.h>


int main(){
    //tis some text
    /*
    tis some more comment
    */
    // printf("hello world!\n");
    // printf("i like chicken!\n");
//--------------------------------------------------------------------------------
    //variables and data types and constants maybe
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
    //array and strings
    // char name[]= "Veeee Keeee";
    // printf("\nMy name is %s", name);
//--------------------------------------------------------------------------------
    //boolean 0 =false, 1= true
    // bool isOnline = false;
    // printf("\n%d", isOnline);
//--------------------------------------------------------------------------------
    //conditional - if-else statement
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

//width precision and flags

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
//operators
//x+y
//x-y
//x*y
//x/y
//x%y
//x++    increment
//x--    decrement
//x**y   x sqaure y
//x+=3   add 3 to x
//x *=5  x = x*5
//x-=5   x = x-5

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
// // scanf("%s", &name); //scanf cant read white space so it will only read what you typed before the white space

// //instead we can use fgets if we wanna store something with whitespaces
// getchar(); //clears the new line character within the input buffer
// printf("Enter your full name:");
// fgets(name, sizeof(name), stdin); //fgets( var, sizeofvar, standard input)
// name[strlen(name)-1] = '\0'; //adds null terminator at the end of whatever you put in the fgets to clear the newine effect
// //name = "sham vee\0"

// printf("Your Name is: %s\n", name);
// printf("Your number is: %d\n", num);
// printf("Your GPA is: %f\n", gpa);
// printf("Your Grade is: %c\n", grade);

//--------------------------------------------------------------------------------

//math function

int x = 9;
int y = sqrt(x);
y = pow(x, 3);
printf("\n%d\n", y);






//--------------------------------------------------------------------------------













//--------------------------------------------------------------------------------










//--------------------------------------------------------------------------------











//--------------------------------------------------------------------------------










//--------------------------------------------------------------------------------












//--------------------------------------------------------------------------------










//--------------------------------------------------------------------------------


    return 0;
}