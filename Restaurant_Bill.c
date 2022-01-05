#include <stdio.h>

int main()
{
    int quantity,price;
    char choice;
    
    printf("\nEnter v for Vadapav");
    printf("\nEnter d for Dabeli");
    printf("\nEnter c for Chaat");
    printf("\nEnter your choice => ");
    scanf("%c",&choice);
    
    if (choice=='v' || choice=='V')
    {
        printf("Price of Vadapav => Rs.30");
        printf("\nEnter quantity => ");
        scanf("%d",&quantity);
        printf("\nYour Total Bill => %d",quantity*30);
    }
    else  if (choice=='d' || choice=='D')
    {
        printf("Price of Dabeli => Rs.25");
        printf("\nEnter quantity => ");
        scanf("%d",&quantity);
        printf("\nYour Total Bill => %d",quantity*25);
    }
    else  if (choice=='c' || choice=='C')
    {
        printf("Price of Chaat => Rs.50");
        printf("\nEnter quantity => ");
        scanf("%d",&quantity);
        printf("\nYour Total Bill => %d",quantity*50);
    }
    else
    {
        printf("\n!!!WRONG OPTION!!!");
    }
    return 0;
}
