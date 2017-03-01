#include <stdio.h>

typedef char BOOL;
#define TRUE 1;
#define FALSE 0;

int main()
{
    int Count = 0;

    scanf("%d", &Count);
    
    int Start = 2;

    for(int i = Start; i < Start + Count; i++)
    {
	BOOL IsLastElement = (i == (Start + Count - 1));
	
	printf("%d%s",
	       (i % 2 ? -i : i),
	       (IsLastElement ? "":", "));
    }

    return (0);
}
