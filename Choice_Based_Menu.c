#include <stdio.h>

int main()
{
    int number1,number2;
    char choice;
    
    printf("\nEnter o for Odd/Even");
    printf("\nEnter p for Positive/Negative");
    printf("\nEnter m for Max between 2 number");
    printf("\nEnter your choice => ");
    scanf("%c",&choice);
    
    
    if(choice=='o' || choice=='O')
    {
        printf("\nEnter number => ");
        scanf("%d",&number1);
        if(number1 %2==0)
        {
            printf("\n %d is even",number1);
        }
        else
        {
            printf("\n %d is odd",number1);
        }
    }
    else if(choice=='p' || choice=='P')
    {
        printf("\nEnter number => ");
        scanf("%d",&number1);
        if(number1 >=0)
        {
            printf("\n %d is Positive",number1);
        }
        else
        {
            printf("\n %d is Negative",number1);
        }
    }
    else if(choice=='m' || choice=='M')
    {
        printf("\nEnter number1 => ");
        scanf("%d",&number1);
        printf("\nEnter number2 => ");
        scanf("%d",&number2);
        if(number1>number2)
        {
            printf("\n%d is greater than %d",number1,number2);
        }
        else
        {
            printf("\n%d is smaller than %d",number1,number2);
        }
    }
    else
    {
        printf("\n!!!WRONG OPTION!!!");
    
    }

    return 0;
}

