/*
ALGORITHM:

    START

        Accept number as no
        if no is completely divisible by 2 
            then print even
        otherwise
            print Odd

    STOP    

    START

        Accept number as no
        Divide no by 2
        if remainder is 0 
            then print as even
        otherwise
            print as Odd   

    STOP

*/

#include<stdio.h>

int main()

{
    int iValue=0;
    int iRemainder=0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRemainder=iValue%2;
    
    if(iRemainder==0)
    {
        printf("number is even \n");
    }

    else
    {
        printf("Number is odd");
    }

    return 0;
}