//This program does mathematic operation according to user choice of input

#include <stdio.h>

int main()
{
    int no1,no2;
    int choice;
    
do
{
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Division");
    printf("\nEnter 4 for Multiplication");
    printf("\nEnter 5 to Exit");
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
    else if(choice==5)
    {
        printf("\nBye");
    }
    else
    {
        printf("\n!!!WRONG OPTION!!!\n");
    
    }
}while(choice!=5);

    return 0;
}


