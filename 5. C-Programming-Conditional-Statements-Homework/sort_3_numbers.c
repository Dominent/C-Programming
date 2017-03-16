#include <stdio.h>

void Swap ( double *, double * );

int main ( void )
{
    double A, B, C = 0.0;

    scanf("%lf%lf%lf", &A, &B, &C);

    if(B > A && B > C)
    {
	Swap(&B, &A);
    }
    else if(C > A && C > B)
    {
	Swap(&C, &A);
    }

    if( B < C)
    {
	Swap(&B, &C);
    }

    printf("%.2lf, %.2lf, %.2lf\n", A, B, C);
    
    return ( 0 );
}

void Swap (double * X, double * Y)
{
    *X = ( * X ) * ( * Y );
    *Y = ( * X ) / ( * Y );
    *X = ( * X ) / ( * Y );
}
