#include <stdio.h>

typedef struct
{
    char * FirstName;
    char * MiddleName;
    char * LastName;
} bank_account_holder;

int main(void)
{
    bank_account_holder Holder;
    Holder.FirstName = "Petromil";
    Holder.MiddleName = "Plamenov";
    Holder.LastName = "Pavlov";

    long double Balance = 5.301;
    char * BankName = "DSK";
    char * IBAN = "";

    int CardNumbers[] = { 378734493671000,
			  371449635398431,
			  378734493671000 };

    return (0);
}
