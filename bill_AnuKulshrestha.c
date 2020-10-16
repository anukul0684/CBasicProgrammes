#include <stdio.h>


void main(){

    int bill;
    int onecoin=0;
    int fivecoins=0;
    int tencoins=0;
    int totalcoins=0;

    printf("Enter any value for bill:");
    scanf("%d",&bill);

    printf("bill value is %d",bill);

    tencoins=bill/10;
    bill=bill%10;

    fivecoins=bill/5;
    bill=bill%5;

    onecoin=bill/1;
    bill=bill%1;

    printf("\n We need %d 10 coins",tencoins);
    printf("\n We need %d 5 coins",fivecoins);
    printf("\n We need %d 1 coins",onecoin);

    totalcoins = tencoins + fivecoins + onecoin;

    printf("\n We need total %d coins in all",totalcoins);

}
