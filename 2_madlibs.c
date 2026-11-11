#include<stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    char adj1[30]="";
    char name[30]="";
    char adj2[30]="";
    char verb[30]="";
    char adj3[30]="";


    printf("Enter an adjective (description):");
    scanf("%s", adj1);

    getchar();
    printf("Enter a noun (animal or person):");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1]= '\0';

    printf("Enter an adjective (description):");
    scanf("%s", adj2);

    printf("Enter a verb(ending with -ing)");
    scanf("%s", verb);

    printf("Enter an adjecctive (description):");
    scanf("%s", adj3);


    printf("Today I went to a %s zoo.\n", adj1);
    printf("In an exhibit, I saw %s.\n", name);
    printf("%s was %s and %s!\n", name, adj2, verb);
    printf("I was %s.\n", adj3);


    return 0;
}