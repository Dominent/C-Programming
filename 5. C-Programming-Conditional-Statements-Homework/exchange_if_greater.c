#include <stdio.h>

int main ( void )
{
    int Val1 = 0.0f;
    int Val2 = 0.0f;

    scanf("%d%d", &Val1, &Val2);

    if(Val1 > Val2)
    {
	Val1 = Val1 ^ Val2;
	Val2 = Val1 ^ Val2;
	Val1 = Val1 ^ Val2;
    }

    printf("Val1: %d\nVal2: %d\n", Val1, Val2); 

    return ( 0 );
}
