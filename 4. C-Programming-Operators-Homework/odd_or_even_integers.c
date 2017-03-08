#include <stdio.h>

int main ( void )
{
    int Input = 0;

    scanf("%d", &Input);

    char IsOdd = Input % 2;

    printf(IsOdd ? "ODD": "EVEN");

    return ( 0 );
}
