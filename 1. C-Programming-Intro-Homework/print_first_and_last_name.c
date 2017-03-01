#include <stdio.h>

#define FORMAT "%s\n%s"

int main()
{
    char* FirstName = "Peter";
    char* LastName = "Pavlov";

    printf(FORMAT, FirstName, LastName);
    
    return (0);
}
