#include <stdio.h>

int main()
{
    
    char choice;
    float number1,number2;
    printf("Enter + for Addition = ");
    printf("\nEnter - for Subtraction = ");
    printf("\nEnter / for Division = ");
    printf("\nEnter * for Multiplication = ");
    printf("\nEnter your choice = ");
    scanf("%c",&choice);
    

    switch(choice)
    {
        case '+':
        printf("\nEnter number 1 = ");
        scanf("%f",&number1);
        printf("\nEnter number 2 = ");
        scanf("%f",&number2);
        printf("\nAddition = %.2f",number1+number2);
        break;
        
        case '-':
        printf("\nEnter number 1 = ");
        scanf("%f",&number1);
        printf("\nEnter number 2 = ");
        scanf("%f",&number2);
        printf("\nSubtraction = %.2f",number1-number2);
        break;
        
        case '/':
        printf("\nEnter number 1 = ");
        scanf("%f",&number1);
        printf("\nEnter number 2 = ");
        scanf("%f",&number2);
        printf("\nDivision = %.2f",number1/number2);
        break;
        
        case '*':
        printf("\nEnter number 1 = ");
        scanf("%f",&number1);
        printf("\nEnter number 2 = ");
        scanf("%f",&number2);
        printf("\nMultiplication = %.2f",number1*number2);
        break;
        
        default:
        printf("\nWrong opt");
    }

    return 0;
}
