#include <stdio.h>

int main ( void )
{
    int ValN = 0;
    int Input = 0;
    int Counter = 1;
    char Digit = '-';
    char IsEmpty = 1;

    scanf("%d", &Input);
    scanf("%d", &ValN);

    while(Input)
    {
	Input /= 10;
	++Counter;

	if(ValN == Counter)
	{
	    Digit = Input % 10;
	    IsEmpty = 0;
	    break;
	}
    }

    printf(IsEmpty ? "%c" : "%d",
	   Digit);
    
    return ( 0 );
}
