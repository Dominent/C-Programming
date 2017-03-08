#include <stdio.h>

int main( void )
{
    int Input = 0;

    scanf("%d", &Input);

    char IsOddAndGreaterThan20 = (Input % 2 != 0) && (Input > 20);

    printf("%d", IsOddAndGreaterThan20);
    
    return ( 0 );
}
