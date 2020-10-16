#include <stdio.h>


void main(){

    int n=0;
    printf("\nHow many numbers you want to sort? Please enter the number: ");
    scanf("%d", &n);
    int arr[n];
    if(n)
    {
        for(int i=1; i<=n; i++)
        {
            printf("\nEnter a value: ");
            scanf("%d", &arr[i-1]);
        }

        int max=arr[0];

        for(int i=1; i<=n; i++)
        {
            if(arr[i-1]>max)
            {
                max=arr[i-1];
            }
        }
        printf("\nThe biggest value of all numbers is %d ",max);
    }
    else
    {
        printf("\nYou have entered a value less than or equal to zero: ");
    }
    printf("\n ************************End of Program************************ ");
}


