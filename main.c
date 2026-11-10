#include<stdio.h>
#include<stdbool.h> //to use boolean data type

int main(){
    //tis some text
    /*
    tis some more comment
    */
    printf("hello world!\n");
    printf("i like chicken!\n");

    //variables and data types and constants maybe
    int num1 = 2;
    int num2 = 3;
    int sum = num1 + num2;
    printf("sum =%d ",sum);


    float num3 = 5.0;
    printf("\nthis is %f", num3);

    char alph = 'C';
    printf("\nyour grade is %c", alph);

    char currency = '$';
    printf("\nThe currency is %c", currency);

    double pi = 3.14159265358979;
    printf("\nthis is %.15lf long float number", pi);

    //array and strings
    char name[]= "Veeee Keeee";
    printf("\nMy name is %s", name);

    //boolean 0 =false, 1= true
    bool isOnline = false;
    printf("\n%d", isOnline);

    return 0;
}