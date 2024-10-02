#include <iostream>

struct bankAccount
{
	double balance; // stan konta
	std::string owner; //właściciel
	std::string currency; // waluta
};

void accountInformation(bankAccount& account)
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n\n";
}

void depositToAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthDrawFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(bankAccount& sourceAccount, bankAccount& targetAccount, double amount)
{
	if (widthDrawFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

int main()
{
    std::cout << "Hello World!\n";
}
