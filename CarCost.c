#include <stdio.h>


void main(){

    char ch;

    printf("select a or b or c for the cost of car and press enter:");
    printf("\n\t a. Ferrari");
    printf("\n\t b. Kia Rio");
    printf("\n\t c. Honda Civic\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
            printf("Ferrari costs $300,000");
            break;
        case 'b':
            printf("Kia Rio costs $15,000");
            break;
        case 'c':
            printf("Honda Civic costs $30,000");
            break;
        default:
            printf("You did not pick any option");
    }

}
