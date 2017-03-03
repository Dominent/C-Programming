#include <stdio.h>

int main ( void )
{
    int ValN = 0;

    printf("Enter N: \n");
    scanf("%d", &ValN);

    for(int i = 1; i <= ValN; i++)
    {
	printf("%d\n", i);
    }
	        
    return ( 0 );
}
