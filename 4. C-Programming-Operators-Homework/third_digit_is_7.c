#include <stdio.h>

int main ( void )
{
    int Input = 0;
    char Is7 = 0;
    
    scanf("%d", &Input);

    if(Input < 100)
    {
	printf("false");
    }
    else
    {
	Is7 = (((Input / 100) % 10) == 7);

	printf("%s", Is7 ? "true": "false");
    }
    
    return ( 0 );
}
