#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef char bool;

#define PLAY_CARDS_SIZE 13
#define PLAY_CARD_SIZE 2

int main ( void )
{
    char * PlayCards[PLAY_CARDS_SIZE] =
	{"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    char PlayCard[PLAY_CARD_SIZE + 1] = "";

    bool IsMatch = FALSE;

    scanf("%s", PlayCard);
    
    for(int i = 0; i < PLAY_CARDS_SIZE; ++i)
    {
	if( strcmp( PlayCards[i], PlayCard ) == 0)
	{
	    IsMatch = TRUE;
	}
    }

    printf("%s\n", IsMatch ? "Yes" : "No");

    return ( 0 );
}
