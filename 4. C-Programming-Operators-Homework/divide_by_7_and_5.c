#include <stdio.h>

int main ( void )
{
    int Input = 0;

    scanf("%d", &Input);

    char IsDivisableBy5And7 = (Input % 5 == 0) && (Input % 7 == 0);

    printf("%d", IsDivisableBy5And7);

    return ( 0 );
}
