#include <stdio.h>


void main(){

    int n=0;
    printf("\nHow many numbers you want to sort? Please enter the number: ");
    scanf("%d", &n);
    int arr[n];

    if(n)
    {
        if(n>1)
        {
            for(int i=0; i<n; i++)
            {
                printf("\nEnter a value: ");
                scanf("%d", &arr[i]);
                printf("%d",arr[i]);
            }
            int min=arr[0];
            int min2=arr[1];
            for(int i=0; i<n; i++)
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }

            printf("\nThe smallest value of all numbers is %d ",min);

            for(int j=0; j<n; j++)
            {
                if(arr[j]!=min)
                {
                    if(arr[j]<min2)
                    {
                        min2=arr[j];
                    }
                }
            }

            printf("\nThe second smallest value of all numbers is %d ",min2);
        }
        else{
            printf("\nYou have entered only 1 value to sort.");
        }
    }
    else
    {
        printf("\nYou have entered a value less than or equal to zero: ");
    }

    printf("\n ******************************** End of Program ******************************** ");
}


