#include <stdio.h>
#include <string.h>

void Concatination(char getstr[],char nchar)
/*
    adds one char to string
    @param string array and the character to add to the string
    @return not required.
*/
{
    int i=0;

    while(getstr[i]!='\0')
    {
       i=i+1;
    }

    if(getstr[i]=='\0')
    {
        getstr[i]=nchar;
        getstr[i+1]='\0';
    }

    printf("\n New string in function is : %s",getstr);
}


void main(){

    char mainstr[20]={"Hello World"};
    char newchar;

    printf("\n");
    printf("\nPlease enter the character you add to the string: ");
    scanf("%c",&newchar);
    Concatination(mainstr,newchar);
    printf("\n\nThe new string is %s",mainstr);
    printf("\n");
    printf("\n");
    printf("\n*****************************************************");
}
