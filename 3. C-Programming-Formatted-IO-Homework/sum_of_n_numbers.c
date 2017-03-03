#include <stdio.h>

int main ( void )
{
    int ValN = 0;

    printf("Enter N: \n");
    scanf("%d", &ValN);

    float Sum = 0;
    for(int i = 0; i < ValN; i++)
    {
	float Input = 0.0f;
	scanf("%f", &Input);

	Sum += Input;
    }

    printf("%.1f", Sum);

    return ( 0 );
}
