#include <stdio.h>
#include <stdarg.h>

#define ConvertToChar(x)(x + 48)

#define MAX_DIGITS 4
#define FORMAT "Sum: %d\n" \
               "Reversed: %s\n" \
               "Last digit infront: %s\n" \
               "Second third digit exchanged: %s\n"

int main ( void )
{
    int Input = 0;
    int Sum = 0;
    int	Count = 0;
    
    char Digits[MAX_DIGITS];

    scanf("%d", &Input);

    for(Count;
	Input != 0 && Count < MAX_DIGITS;
	Input /= 10, ++Count)
    {
	int Digit = Input % 10;
	
	Digits[Count] = ConvertToChar(Digit);
	
	Sum += Digit;
    }

    if(Count == MAX_DIGITS)
    {
	printf(FORMAT,
	       Sum,
	       (char[]){Digits[0], Digits[1], Digits[2], Digits[3], '\0'},
	       (char[]){Digits[0], Digits[2], Digits[1], Digits[3], '\0'},
	       (char[]){Digits[3], Digits[1], Digits[2], Digits[0], '\0'});
    }

    return ( 0 );
}
