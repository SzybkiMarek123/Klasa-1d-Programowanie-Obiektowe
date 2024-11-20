#include <iostream>
#include "BankAccount.h"

int main()
{
	setlocale(LC_CTYPE, "polish");
	BankAccount firstAccount(10000, "Jan Kowalski", "zł");//konstruktor z parametrami
	//firstAccount.SetBalance(10000);
	//firstAccount.balance = 10000;
	//firstAccount.owner = "Jan Kowalski";
	//firstAccount.currency = "zł";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	firstAccount.DepositToAccount(500);
	//depositToAccount(firstAccount, 500);

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	//secondAccount.SetBalance(15000);
	//secondAccount.balance = 15000;
	//secondAccount.owner = "Ewa Kowalska";
	//secondAccount.currency = "zł";

	secondAccount.AccountInformation();

	secondAccount.WidthDrawFromAccount(500);

	secondAccount.AccountInformation();

	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.AccountInformation();

	secondAccount.AccountInformation();
}

/*

Konstruktor - to metoda z reguły publicza jest wywoływana tylko raz podczas
tworzenia obiektu automatycznie, potem się nie da jej wywołać, bez typu zwracanego bez nawet void, jej
nazwa jest taka sama jak obiektu

Nazwę metody pisze się z dużej litery jak i również klasy.
Aby stworzyć klasę piszemy:

class NazwaKlasy
{

	//kod

};

Aby dać znać, że metoda jest metodą a nie funkcją piszemy w
oddzielnym pliku gdzie znajduje się ciało metody dla przykładu tak (metoda zawarta w klasie):

void NazwaKlasy::NazwaMetody
{

//kod

}

Nie ma już potrzeby odwoływać się do konkretnego pola w typie podczas wywoływania metody, ponieważ jest ona wywoływana w
kontekście odpowiedniego obiektu.Przykład:

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym.\n";
	std::cout << "Właściciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n\n";
}

Należy upublicznić klasę, ponieważ jej elementy są domyślnie ukryte.
W pliku hederowym piszemy klasę w której znajdują się nagłówki metod,
jeśli stworzyliśmy własny typ to należy zapisać tam jego cechy. Taki przykład:

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInformation();
}

Operatorem odniesienia/dostępu jest ".". Przykładowe wywołanie metody:

int main()
{
	firstAccount.AccountInformation();
}


Nazwę struktury piszemy z małej litery jak i nazwę funkcji. Aby utworzyć strukturę piszemy:

struct nazwaStruktury
{
//kod
};

*/