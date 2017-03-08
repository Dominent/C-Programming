#include <stdio.h>

int main ( void )
{
    int Input = 0;

    scanf("%d", &Input);

    char IsPureDivisor = ((Input % 9 == 0) || (Input % 11 == 0) || (Input % 13 == 0));
    
    printf("%d", IsPureDivisor);

    return ( 0 );
}

