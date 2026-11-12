#include <stdio.h>
#include <math.h>


int main()
{
    double principal = 0.0;
    double rate = 0.0;
    double time = 0.0;

    printf("Enter the principal amount:");
    scanf("%lf", &principal);

    printf("Enter the rate of interest:");
    scanf("%lf", &rate);

    printf("Enter the time (in years):");
    scanf("%lf", &time);

    double CI = (principal* pow(1 + (rate/100), time)) - principal;
    double amount = principal + CI;

    printf("The toal compund interest is: %.2lf\n", CI);
    printf("Amount to pay after the CI is applied: %.2lf\n", amount);


    return 0;
}