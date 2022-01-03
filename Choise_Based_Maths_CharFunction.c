#include <stdio.h>

int main()
{
    int no1,no2;
    char choice;
    
    printf("\nEnter a for Addition");
    printf("\nEnter s for Subtraction");
    printf("\nEnter d for Division");
    printf("\nEnter m for Multiplication");
    printf("\nEnter your choice => ");
    scanf("%c",&choice);
    
    
    if(choice=='a' || choice=='A')
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nAddition = %d",no1+no2);
    }
    else if(choice=='s' || choice=='S')
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nSubtraction = %d",no1-no2);
    }
    else if(choice=='d' || choice=='D')
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nDivision = %d",no1/no2);
    }
    else if(choice=='m' || choice=='M')
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nMultiplication = %d",no1*no2);
    }
    else
    {
        printf("\n!!!WRONG OPTION!!!");
    
    }

    return 0;
}
