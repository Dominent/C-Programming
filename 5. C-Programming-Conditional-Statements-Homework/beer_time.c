#include <stdio.h>
#include <string.h>

typedef char bool;

#define TRUE 1
#define FALSE 0

#define MAX_DIGITS 2
#define FORMAT "hh:mm tt\n"
#define TIME_OFFSET 12
#define NOON 12
#define START_BEER_TIME 13
#define END_BEER_TIME 3

int main ( void )
{
    // NOTE(Domi): Convert PM to 24 Hours
    
    int Hours = 0;
    int Minutes = 0;
    char Format[MAX_DIGITS + 1] = "";

    printf(FORMAT);
    
    scanf("%2d:%2d %s", &Hours, &Minutes, Format);

    if(!strcmp(Format, "PM"))
    {
	if(Hours != NOON)
	{
	    Hours += TIME_OFFSET;
	}
    }
    
    bool IsBeerTime = ( Hours >= START_BEER_TIME || Hours < END_BEER_TIME );

    printf("%s\n", IsBeerTime ?
	   "Beer time!" :
	   "Non-beer time!");
	       
    return ( 0 );
}
