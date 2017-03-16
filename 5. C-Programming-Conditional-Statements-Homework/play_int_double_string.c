#include <stdio.h>
#include <string.h>

#define FORMAT "Please choose a type:\n" \
               "1 --> int\n" \
	       "2 --> double\n" \
               "3 --> string\n"

#define MAX_CHARS 256

int main ( void )
{
    char Selection = 0;
    
    printf(FORMAT);
    
    scanf("%d", &Selection);

    switch(Selection)
    {
        case 1:
	{
	    printf("Please enter a int!\n");
	    int Input = 0;
	    scanf("%d", &Input);

	    printf("%d\n", Input); 
	} break;

        case 2:
	{
	    printf("Please enter a double!\n");
	    double Input = 0.0;
	    scanf("%lf", &Input);

	    printf("%.2lf\n", Input);
	} break;

        case 3:
	{
	    printf("Please enter a string!\n");
	    
	    char Input[MAX_CHARS] = "";
	    
	    scanf("%s", Input);

	    strcat(Input, "*");

	    printf("%s\n", Input);
	} break;

        default:
	{
	} break;
    }
    
    return ( 0 );
}
