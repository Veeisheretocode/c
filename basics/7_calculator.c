#include<stdio.h>

#include<stdbool.h>


int main (){
    printf("Calculator\n");

    printf("Select operation: \n");

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
    
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1+num2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1-num2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1*num2);
        break;

    case '/':
        printf("%.1lf / %.1f = %.1lf\n", num1, num2, num1/num2);
        break;

    default:
        printf("Enter a valid operator!\n");

    }

    return 0;
}