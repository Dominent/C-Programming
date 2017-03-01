#include <stdio.h>
#include <math.h> //fabs

#define PRECISION 0.000001

int main(void)
{
    float Val1;
    float Val2;

    printf("Enter Val1: ");
    scanf("%f", &Val1);
    
    printf("Enter Val2: ");
    scanf("%f", &Val2);

    char AreEqual = (fabs(Val1 - Val2) <= PRECISION);

    printf("\n%s", AreEqual ? "true": "false");
    
    return (0);
}
