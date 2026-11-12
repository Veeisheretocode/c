#include<stdio.h>

#include<stdbool.h>


int main (){
    printf("Weight converter calculator\n");

    printf("1. Kilograms to punds\n");
    printf("2. Pounds to kilograms\n");

    int choice = 0;
    double weight = 0.0;
    double converted_weight = 0.0;

    printf("Choose your option:");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter the weight in Kilograms:");
        scanf("%lf", &weight);
        converted_weight = weight*2.2046 ;
        printf("Weight in pounds is: %.2lf\n", converted_weight);
    }
    else if(choice ==2){
        printf("Enter the weight in Pounds:");
        scanf("%lf", &weight);
        converted_weight = weight/2.2046 ;
        printf("Weight in kilograms is: %.2lf\n", converted_weight);

    }
    else{
        printf("Enter a valid choice!");
    }

    return 0;
}