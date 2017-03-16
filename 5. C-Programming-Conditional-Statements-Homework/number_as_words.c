#include <stdio.h>

#define NUMBER_COUNT 10

static char * ONES [NUMBER_COUNT] =
{ "Zero", "One", "Two", "Three", "Four", "Five",
  "Six", "Seven", "Eight", "Nine" };
    
static char * TWENTIES [NUMBER_COUNT] =
{ "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fivteen",
  "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    
static char * TENS [NUMBER_COUNT] =
{ "", "Ten", "Twenty", "Thirty", "Fourty", "Fivty",
  "Sixty", "Seventy", "Eighty", "Ninety" };

int main ( void )
{
    int Input = 0;
    
    int Ones, Tens, Hundreds = 0;
    
    scanf("%d", &Input);

    Ones =
	(Input / 1) % 10;
    Tens =
	(Input / 10) % 10;
    Hundreds =
	(Input / 100) % 10;

    if(Input >= 20)
    {
	printf("%s Hundred %s %s\n",
	       ONES[Hundreds], TENS[Tens], ONES[Ones]);
    }
    else if ( Input >= 20)
    {
	printf("%s %s\n",
	       TENS[Tens], ONES[Ones]);
    }
    else if ( Input >= 10)
    {
	printf("%s\n",
	       TWENTIES[Ones]);
    }
    else if (Input >= 0)
    {
	printf("%s\n",
	       ONES[Ones]);
    }

    return ( 0 );
}
