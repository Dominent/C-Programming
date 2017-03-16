#include <stdio.h>

int main ( void )
{
    int Score = 0;
    char IsValidScore = 1;

    scanf("%d", &Score);

    if(Score >= 1 && Score <= 3)
    {
	Score *= 10;
    }
    else if (Score >= 4 && Score <= 6)
    {
	Score *= 100;
    }
    else if(Score >= 7 && Score <= 9)
    {
	Score *= 1000;
    }
    else
    {
	IsValidScore = 0;
	printf("Invalid score!\n");
    }

    if(IsValidScore)
    {
	printf("%d\n", Score);
    }

    return ( 0 );
}
