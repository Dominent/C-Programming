#include <stdio.h>

int main ( void )
{
    int Val1, Val2, Val3 = 0;

    float Average = 0.0f;
    
    scanf("%d%d%d", &Val1, &Val2, &Val3);

    Average = (Val1 + Val2 + Val3) / 3.0f;

    printf("%.5f", Average);

    return ( 0 );
}
