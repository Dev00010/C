//This program shows the use of ternary operator

#include <stdio.h>

int main()
{
    int number;
    
    printf("Enter number = ");
    scanf("%d",&number);
    
    number%2==0? printf("Number is even"): printf("\nNumber is odd");
    
    
    return 0;
}
