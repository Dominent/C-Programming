#include <stdio.h>

int main ( void )
{
    float A = 0.0f;
    float B = 0.0f;
    float H = 0.0f;

    float Area = 0.0f;

    scanf("%f%f%f", &A, &B, &H);

    Area = ( ( ( A + B ) / 2 ) * H );

    printf(".2%f\n", Area);
	
    return ( 0 );
}
