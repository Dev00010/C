//This program takes numeric input and runs logic corresponding to it

#include <stdio.h>

int main()
{
    float no1,no2;
    int choice;
    
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Division");
    printf("\nEnter 4 for Multiplication");
    printf("\nEnter your choice => ");
    scanf("%d",&choice);
    
    
    if(choice==1)
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nAddition = %d",no1+no2);
    }
    else if(choice==2)
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nSubtraction = %d",no1-no2);
    }
    else if(choice==3)
    {
        printf("\nEnter no1 => ");
        scanf("%d",&no1);
        printf("\nEnter no2 => ");
        scanf("%d",&no2);
        printf("\nDivision = %d",no1/no2);
    }
    else if(choice==4)
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
