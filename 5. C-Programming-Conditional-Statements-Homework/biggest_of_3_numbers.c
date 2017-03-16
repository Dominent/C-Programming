#include <stdio.h>
#include <limits.h>

#define NUMBERS_COUNT 3

int main ( void )
{
    float MaxNumber = INT_MIN;
    
    for(int i = 0; i < NUMBERS_COUNT; ++i)
    {
	float Input = 0.0f;

	scanf( "%f", &Input );

	if(Input > MaxNumber)
	{
	    MaxNumber = Input;
	}
    }

    printf("%.2f\n", MaxNumber);
    
    return ( 0 );
}
