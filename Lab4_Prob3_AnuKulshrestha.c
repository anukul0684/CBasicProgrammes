#include <stdio.h>
#include <math.h>


void main(){

    char str[20];
    printf("Please enter a string: ");
    scanf("%s",str);
    printf("\nThe word entered is: %s", str);

    int count=0;
    for(int i=1;i<=20;i++)
    {
        if(str[i-1]=='\0')
        {
            break;
        }
        else{
            count=count+1;
        }
    }
    printf("\nThe characters in %s is %d", str,count);
}
