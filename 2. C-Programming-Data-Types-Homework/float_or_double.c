#include <stdio.h>

int main()
{
    double Val1 = 34.567839023;
    float Val2 = 12.345;
    double Val3 = 8923.1234857;
    float Val4 = 3456.091;
    
    printf("%.9lf\n", Val1);
    printf("%.3f\n", Val2);
    printf("%.7lf\n", Val3);
    printf("%.3f\n", Val4);
    
    return (0);
}
