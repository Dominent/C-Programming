#include <stdio.h>

#define FORMAT "|%-10x|%s|%10.2f|%10.3f|\n"
#define MAX_SIZE 10

char * ToBinary(int);

int main(void)
{
    int Val1 = 0;
    float Val2, Val3 = 0.0f;

    printf("Enter an integer [0 <= num >= 500]: \n");
    
    for(;;)
    {
	scanf("%d", &Val1);

	if(Val1 > 0 && Val1 < 500)
	{
	    break;
	}
	
	printf("Invalid input!\n"\
	       "Entered value not in range!\n"\
	       "Try again!\n");
    }
    
    printf("Enter first floating point number: \n");
    scanf("%f", &Val2);
    
    printf("Enter second floating point number: \n");
    scanf("%f", &Val3);
   
    printf(FORMAT,
    	   Val1, ToBinary(Val1), Val2, Val3);
    
    return ( 0 );
}

char * ToBinary(int Number)
{
    // NOTE(Domi) + 1 for \0 -> terminating string char!
    // NOTE(Domi) static locates it on the heap.
       static char Output[MAX_SIZE + 1];
    
    for(int i = 0; i < MAX_SIZE; i++)
    {
	char Condition = (Number & ( 1 << i )) ? '1' : '0';
	
	Output[i] = Condition;
    }

    Output[MAX_SIZE] = '\0';
    
    return &Output[0];
}
