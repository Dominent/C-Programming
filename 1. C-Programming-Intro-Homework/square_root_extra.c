#include <stdio.h>

short isqrt(short num)
{
	short res = 0;
	short bit = 1 << 14; // The second-to-top bit is set: 1 << 30 for 32 bits

	// "bit" starts at the highest power of four <= the argument.
	while (bit > num)
	{
		bit >>= 2;
	}

	while (bit != 0)
	{
		if (num >= res + bit)
		{
			num -= res + bit;
			res = ( res >> 1 ) + bit;
		}
		else
		{
			res >>= 1;
		}

		bit >>= 2;
	}

	return res;
}

int main( )
{
    int Input = 0;
    
    printf("Enter a number: \n");

    scanf("%d", &Input);
    
    int SQRT = isqrt(Input);

    printf("The square root of %d is %d",Input, SQRT);

    return ( 0 );
}
