#include<stdio.h>

#include<stdbool.h>


int main (){
    printf("Temprature converter calculator\n");

    printf("1. Celcius to Farhenheit\n");
    printf("2. Fahrenheit to Celcius\n");

    int choice = 0;
    double temprature = 0.0;
    double converted_temprature = 0.0;

    printf("\nChoose your option:");
    scanf("%d", &choice);

    if (choice == 1){
        printf("\nEnter the temprature in Celciuss:");
        scanf("%lf", &temprature);
        converted_temprature = temprature*(9.0/5.0)+32 ;
        printf("Temprature in Fahrenheit is: %.2lf\n", converted_temprature);
    }
    else if(choice ==2){
        printf("Enter the temprature in Fahrenheit:");
        scanf("%lf", &temprature);
        converted_temprature = (temprature-32) * (5.0/9.0) ;
        printf("Temprature in Celciuss is: %.2lf\n", converted_temprature);

    }
    else{
        printf("Enter a valid choice! 1 or 2!");
    }

    return 0;
}