#include <stdio.h>

float FunctionMin(float x[],int n)
/*
    calculates minimum value of an array
    @param array and the number of elements in array
    @return float value calculated out of the function.
*/
{
    float min=x[0];
    for(int i=2;i<=n;i++)
    {
        if(x[i-1]<min)
        {
            min=x[i-1];
        }
    }
    return min;
}


void main(){
    int n;
    printf("\n\nHow many elements you want in your array(Print in numbers):");
    scanf("%d",&n);
    float arr[n];
    for(int i=1;i<=n;i++)
    {
        printf("\n\nEnter your number %d element of array:",i);
        scanf("%f",&arr[i-1]);
    }

    float min_value= FunctionMin(arr,n);
    printf("\n\nThe minimum of the array elements is %f",min_value);
    printf("\n");
    printf("\n");
    printf("\n*****************************************************");
}
