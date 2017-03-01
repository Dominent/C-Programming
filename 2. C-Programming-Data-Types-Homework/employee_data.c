#include <stdio.h>

#define FORMAT "First name: %s\nLast name: %s\nAge: %d\nGender: %c\nPersonal ID: %llu\n" \
               "Unique Employee Number: %llu\n"
int main(void)
{
    char * FirstName = "Petromil";
    char * LastName =  "Pavlov";
    char Age = 23;
    char Gender = 'm';
    long long int PersonalId = 8306112508;
    long long int UniqueEmployeeNumber = 27569821;

    printf(FORMAT, FirstName, LastName, Age, Gender, PersonalId, UniqueEmployeeNumber);
}
