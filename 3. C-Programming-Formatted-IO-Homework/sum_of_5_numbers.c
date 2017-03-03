#include <stdio.h>

#define MAX_SIZE 5
#define FORMAT "%d %d %d %d %d"

int main( void )
{
    int Numbers[5];

    for(;;)
    {
	int Matches = scanf(FORMAT,
			   &Numbers[0],
			   &Numbers[1],
			   &Numbers[2],
			   &Numbers[3],
			   &Numbers[4]);

	if(Matches == MAX_SIZE)
        {
	    break;
	}

	printf("Invalid input!\n"\
	       "Entered value not in range!\n"\
	       "Try again!\n");
    }

    int Sum = 0;
    for(int i = 0; i < MAX_SIZE; i++)
    {
	Sum += Numbers[i];
    }

    printf("Sum: %d\n", Sum);
    
    return ( 0 );
}
