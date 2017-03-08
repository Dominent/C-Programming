#include <stdio.h>

#define FORMAT "Area: %.02f\nPerimeter: %.02f"

int main ( void )
{
    float Width, Height, Area, Perimeter = 0.0f;

    scanf("%f", &Width);
    scanf("%f", &Height);

    Area = Width * Height;
    Perimeter = 2 * (Width + Height);
    
    printf(FORMAT, Area, Perimeter);

    return ( 0 );
}
