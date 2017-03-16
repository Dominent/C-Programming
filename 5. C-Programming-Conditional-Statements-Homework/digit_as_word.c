#include <stdio.h>

int main ( void )
{
    char Digit = 0;

    scanf("%d", &Digit);

    switch(Digit)
    {
       case 0:
       {
	   printf("%s\n", "Zero");
       } break;
       
       case 1:
       {
	   printf("%s\n", "One");	   
       } break;

       case 2:
       {
	   printf("%s\n", "Two");	   
       } break;

       case 3:
       {
	   printf("%s\n", "Three");	   
       } break;

       case 4:
       {
	   printf("%s\n", "Four");	   
       } break;

       case 5:
       {
	   printf("%s\n", "Five");	   
       } break;

       case 6:
       {
	   printf("%\n", "Six");	   
       } break;

       case 7:
       {
	   printf("%s\n", "Seven");	   
       } break;

       case 8:
       {
	   printf("%s\n", "Eight");	   
       } break;

       case 9:
       {
	   printf("%s\n", "Nine");	   
       } break;

       default:
       {
	   printf("%s\n", "Not a digit!");	   
       } break;
    }
    
    return ( 0 );
}
