#include <iostream>

class BankAccount
{
public:
	double balance; // stan konta
	std::string owner; //właściciel
	std::string currency; // waluta

	void AccountInformation()
	{
		std::cout << "Informacje o koncie bankowym.\n";
		std::cout << "Właściciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n\n";
	}
};

void depositToAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthDrawFromAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{

		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (widthDrawFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.owner = "Ewa Kowalska";
	secondAccount.currency = "z³";

	secondAccount.AccountInformation();

	widthDrawFromAccount(secondAccount, 500);

	secondAccount.AccountInformation();

	transferBetweenAccounts(secondAccount, firstAccount, 1000);

	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}