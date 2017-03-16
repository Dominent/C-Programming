#include <stdio.h>

#define NUMBERS_COUNT 3

int main ( void )
{
    int Counter = 0;
    
    for(int i = 0; i < NUMBERS_COUNT; ++i)
    {
	float Input = 0.0f;

	scanf( "%f", &Input );

	if(Input > 0)
	{
	    ++Counter;
	}
    }

    printf("%c\n", Counter % 2 ? '+' : '-' );
    
    return ( 0 );
}
