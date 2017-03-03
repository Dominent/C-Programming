#include <stdio.h>

int main ( void )
{
    int Val1, Val2 = 0;

    scanf("%d %d", &Val1, &Val2);

    for(Val1; Val1 <= Val2; ++Val1)
    {
	if(Val1 % 5 == 0)
	{
	    printf((Val1 == Val2 ? "%d" : "%d, "), Val1);
	}
    }

    return ( 0 );
}
