//This program prints area of circle for radius of 2

#include <stdio.h>

int main()
{
    float pi,radius,area;
    pi=3.14;
    radius=2;
    area=pi*(radius*radius); 
    printf("area=%.2f",area);	//.2f is used to limit answer to 2 decimal value
    return 0;
}
