#include <stdio.h>

int main()
{
    int no,choice;
    
    printf("\nEnter 1 for square");
    printf("\nEnter 2 for cube");
    printf("\nEnter =>");
    scanf("%d",&choice);
    
    
    if(choice==1)
    {
        printf("\nEnter no =>");
        scanf("%d",&no);
        printf("\nSquare= %d",no*no);
    }
    else if(choice==2)
    {
         printf("\nEnter no =>");
        scanf("%d",&no);
        printf("\nCube = %d",no*no*no);
    }
    else
    {
        printf("\nWRONG OPTION");
    
    }

    return 0;
}
