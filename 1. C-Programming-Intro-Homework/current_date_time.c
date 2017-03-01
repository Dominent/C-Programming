#include <stdio.h>
#include <time.h>

#define BUFFER_SIZE 80

int main (void)
{
    time_t RawDateTime;
    RawDateTime = time(NULL);
    char Buffer [BUFFER_SIZE];
    
    struct tm* TimeInfo;
    TimeInfo = time(&RawDateTime);

    TimeInfo = localtime(&RawDateTime);

    strftime (Buffer,BUFFER_SIZE, "%d %B %Y %T",TimeInfo);
    puts (Buffer);
        
    return (0);
}
