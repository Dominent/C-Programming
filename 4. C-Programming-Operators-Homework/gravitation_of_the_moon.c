#include <stdio.h>

#define GRAVITATION_ON_MOON 0.17

int main ( void )
{
    float WeightOnEarth, WeightOnMoon = 0.0f;
    scanf("%f", &WeightOnEarth);
    
    WeightOnMoon = WeightOnEarth * GRAVITATION_ON_MOON;

    printf("%.2f", WeightOnMoon);
    
    return ( 0 );
}
