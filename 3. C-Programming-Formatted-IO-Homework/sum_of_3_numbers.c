#include <stdio.h>

int main( void )
{
    int Val1, Val2, Val3, Sum;

    printf("Enter 3 numbers [a b c]: ");

    scanf("%d %d %d", &Val1, &Val2, &Val3);

    Sum = Val1 + Val2 + Val3;
    
    printf("\n%d", Sum);
    
    return ( 0 );
}
