#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define OUTPUT_FORMAT "\n%s\nAddress: %s\nTel. %s\nFax: %s\nWeb site: %s\n" \
                      "Manager: %s (age: %d, tel. %s)\n"

typedef struct
{
    char FirstName[MAX_SIZE];
    char LastName[MAX_SIZE];
    char Phone[MAX_SIZE];
    int Age;
} manager;

typedef struct
{
    char Name[MAX_SIZE];
    char Address[MAX_SIZE];
    char Phone[MAX_SIZE];
    char Fax[MAX_SIZE];
    char Website[MAX_SIZE];
    
    manager Manager;

} company;

int main( void )
{
    company Company;

    printf("Enter company name: \n");
    fgets(Company.Name, MAX_SIZE, stdin);

    printf("Enter company address: \n");
    fgets(Company.Address, MAX_SIZE, stdin);
    
    printf("Enter company phone: \n");
    fgets(Company.Phone, MAX_SIZE, stdin);

    printf("Enter company fax: \n");
    fgets(Company.Fax, MAX_SIZE, stdin);

    printf("Enter company website: \n");
    fgets(Company.Website, MAX_SIZE, stdin);

    printf("Enter manager firstname: \n");
    fgets(Company.Manager.FirstName, MAX_SIZE, stdin);

    printf("Enter manager lastname: \n");
    fgets(Company.Manager.LastName, MAX_SIZE, stdin);

    printf("Enter manager phone: \n");
    fgets(Company.Manager.Phone, MAX_SIZE, stdin);

    printf("Enter manager age: \n");
    scanf("%d", &Company.Manager.Age);

    printf(OUTPUT_FORMAT,
	   Company.Name,
	   Company.Address,
	   Company.Phone,
	   strlen(Company.Fax) ? ("no fax") : Company.Fax,
	   Company.Website,
	   Company.Manager.FirstName,
	   Company.Manager.Age,
	   Company.Manager.Phone);
    
    return ( 0 );
}
