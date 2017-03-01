#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define DIVIDER "."
#define BUFFER_SIZE 10
#define DATE_FORMAT_LENGTH 4

int main(void)
{
    char Input [BUFFER_SIZE];

    time_t RawDateTime = time(NULL);
    struct tm* TimeInfo  = localtime(&RawDateTime);

    printf("Enter birthday [DD.MM.YY]: \n ");

    scanf("%s", Input);

    for (char *Token = strtok(Input, DIVIDER);
	 Token != NULL;
	 Token = strtok(NULL, DIVIDER))
    {
	if(strlen(Token) == DATE_FORMAT_LENGTH)
	{
	    int Year = atoi(Token);
	    int CurrentYear = (TimeInfo->tm_year + 1900);

	    int Age = (CurrentYear - Year);
	    
	    printf("Now: %d\n", Age);
    	    printf("Age after 10 years: %d\n", Age + 10);
	 }
    }
     
    return(0);
}
