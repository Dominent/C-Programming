#include <stdio.h>
#include <math.h>

/*
Write an expression that checks for given point (x, y) if it is within the circle K({1, 1}, 1.5) and out of the rectangle R(top=1, left=-1, width=6, height=2). Print yes or no:
*/

char IsInCircle(float X, float Y);
char IsInRectangle(float X, float Y);

int main ( void )
{
    float X = 0.0f;
    float Y = 0.0f;
    
    char Condition = 0;

    scanf("%f%f", &X, &Y);
    
    Condition = IsInCircle(X, Y) && !IsInRectangle(X, Y);

    printf("%s\n", Condition ? "Yes" : "No");
        
    return ( 0 );
}

// (x-center_x)^2 + (y - center_y)^2 < radius^2

char IsInCircle(float X, float Y)
{
    #define CENTER_X 1.0f
    #define CENTER_Y 1.0f

    #define CIRCLE_RADIUS 1.5f
    
    return pow((X - CENTER_X), 2) + pow((Y - CENTER_Y), 2) < pow(CIRCLE_RADIUS, 2);
}

char IsInRectangle(float X, float Y)
{
    #define TOP 1
    #define BOTTOM -1
    #define LEFT -1
    #define RIGHT 5

    return ((X >= LEFT && X <= RIGHT) &&
	    (Y <= TOP && Y >= BOTTOM));
}
		       
