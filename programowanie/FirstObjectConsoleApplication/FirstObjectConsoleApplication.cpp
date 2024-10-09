#include <iostream>
#include "BankAccount.h"

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	firstAccount.DepositToAccount(500);
	//depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.owner = "Ewa Kowalska";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	secondAccount.WidthDrawFromAccount(500);

	secondAccount.AccountInformation();

	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.AccountInformation();

	secondAccount.AccountInformation();
}