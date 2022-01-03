//This program prints pass if student scores more than 50 or else prints fail

#include <stdio.h>

int main()
{
    int Physics,Chemistry,Maths,Total;
    printf("Enter Chemistry Marks =");
    scanf("%d",&Chemistry);
    
    printf("Enter Physics Marks =");
    scanf("%d",&Physics);
    
    printf("Enter Maths Marks =");
    scanf("%d",&Maths);
    
    Total=Chemistry+Physics+Maths;
    
    printf("\n Your Chemistry result = %d",Chemistry);
    printf("\n Your Physics result = %d",Physics);
    printf("\n Your Maths result = %d",Maths);
    printf("\n Your Total result = %d",Total);
    
    if(Total>50)
    {
        printf("\nYou are Pass");
    }
    else
    {
        printf("\nOoops u are fial , call to ur parents");
    }
    
    
    

    return 0;
}
