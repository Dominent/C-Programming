#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define SIZE 5

void SelectionSort ( int [], int, int );
void Swap ( int *, int * );
void ThrowException ( char * );
char * GetSummators ( int, int * );

int main ( void )
{
    int Input[SIZE] = { 3, -2, 1, 1, 8};

    SelectionSort ( Input, 0, SIZE );

    for ( int i = 0; i < SIZE - 1; ++i )
    {
	int Current = Input[i];
	int Counter = i + 1;
	char * Summators = GetSummators ( Counter, Input );
	
	for ( int j = i + 1; j < SIZE; ++j )
	{
	    int Sum = Current + Input[j];

	    printf ( "%s %d = %d\n", Summators, Input[j], Sum );

	    if( j == SIZE - 1 && Counter < SIZE - 1)
	    {
		j = Counter;
		
		Counter++;
		
		free ( Summators );
		
		Current += Input[Counter];

		Summators = GetSummators ( Counter, Input );
	    }
	}
    }

    return ( 0 );
}

void ThrowException ( char * Message )
{
	perror ( Message );
	
	exit ( 1 );
}

char * GetSummators ( int End, int * Numbers )
{
    #define DEFAULT_BUFFER_SIZE 10
    #define NOT_ENOUGH_MEMORY "Could not allocate enough memory"

    static int Size = ( DEFAULT_BUFFER_SIZE + 1 ) ;
    
    char * Buffer = calloc ( Size , sizeof( char ) );
    if(!Buffer)
    {
	ThrowException( NOT_ENOUGH_MEMORY );
    }

    if( End >= Size )
    {
	Size *= 2;
	    
	char * NewBuffer = calloc ( Size, sizeof( char ) );
	if(!NewBuffer)
	{
	    ThrowException( NOT_ENOUGH_MEMORY );
	}

	strcpy ( NewBuffer, Buffer );

	free(Buffer);

	Buffer = NewBuffer;
    }
 	
    for(int i = 0; i < End; ++i)
    {
	sprintf(Buffer, "%s %d +",
		Buffer, Numbers[i]);
    }

    return Buffer;
}

void Swap( int * X, int * Y )
{
    *X = ( * X ) + ( * Y );
    *Y = ( * X ) - ( * Y );
    *X = ( * X ) - ( * Y );
}

void SelectionSort ( int Array [], int Start, int End )
{
    for ( int i = Start; i < End - 1; ++i)
    {
	int Min = i;

	for ( int j = i + 1; j < End; ++j)
        {
	    if(Array[j] < Array[Min])
	    {
		Min = j;
	    }
	}

	if(Min != i)
	{
	    Swap( &Array[i], &Array[Min] );
	}
    }
}


