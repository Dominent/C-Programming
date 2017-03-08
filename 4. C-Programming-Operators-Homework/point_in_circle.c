#include <stdio.h>
#include <math.h>

char IsInCircle(float, float);

int main ( void )
{
    float X = 0;
    float Y = 0;

    scanf("%f%f", &X, &Y);

    printf("%s\n", IsInCircle(X, Y) ? "Yes": "No");
    
    return ( 0 );
}

char IsInCircle(float X, float Y)
{
    #define CENTER_X 0.0f
    #define CENTER_Y 0.0f

    #define CIRCLE_RADIUS 2.0f
    
    return pow((X - CENTER_X), 2) + pow((Y - CENTER_Y), 2) < pow(CIRCLE_RADIUS, 2);
}
