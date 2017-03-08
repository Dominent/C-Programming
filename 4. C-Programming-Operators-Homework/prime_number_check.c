#include <stdio.h>
#include <math.h>

int main( void )
{
    int Input = 0;
    char IsPrime = 1;
    
    scanf("%d", &Input);

    if(Input > 1)
    {
	for(int i = 1; i < sqrt(Input); ++i)
	{
	    if(Input % i == 0)
	    {
		IsPrime = 0;
		break;
	    }
	}
    }
    else
    {
	IsPrime = 0;
    }
   
    printf("%s", IsPrime ? "True": "False");

    return ( 0 );
}
