#include <stdio.h>

#define PI 3.14159265358979323846
#define FORMAT "Area: %.2f\nPerimeter: %.2f\n"

int main(void)
{
    // NOTE(Domi): Area: 2pr
    // NOTE(Domi): Perimeter: pr^2

    float Radius, Area, Perimeter = 0.0f;


    scanf("%f", &Radius);
    
    Area = 2 * PI * Radius;
    Perimeter = PI * (Radius * Radius);

    printf(FORMAT, Area, Perimeter);
    
    return ( 0 );
}
    
