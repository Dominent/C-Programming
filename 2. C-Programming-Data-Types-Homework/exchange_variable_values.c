#include <stdio.h>

int main(void)
{
    char ValA = 5;  // 0000 0101
    char ValB = 10; // 0000 1010

    ValA = ValA ^ ValB; // 0000 1111
    ValB = ValA ^ ValB; // 0000 0101
    ValA = ValA ^ ValB; // 0000 1010
    
    return ( 0 );
}
