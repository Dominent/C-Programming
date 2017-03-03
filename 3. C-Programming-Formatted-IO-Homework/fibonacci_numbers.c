#include <stdio.h>

void Fibonacci( int );

int main ( void )
{
    int ValN = 0;
	scanf("%d", &ValN);

    Fibonacci(ValN);

    return ( 0 );
}

void Fibonacci( int N )
{
    
    #define FIRST_FIB_NUM 0
    #define SECOND_FIB_NUM 1

    int CurrentFibNumber = FIRST_FIB_NUM;
    int NextFibNumber = SECOND_FIB_NUM;
    int Result = SECOND_FIB_NUM;

    printf("0 ");
    
    if(N == 1)
    {
        return;
    }
        
    for(int i = 0; i <  (N - 1); ++i)
    {
        printf("%d ", Result);
    	
    	Result = CurrentFibNumber + NextFibNumber;
    	
    	CurrentFibNumber = NextFibNumber; //1
    	
    	NextFibNumber = Result; //1
    }

    printf("\n");   
}
