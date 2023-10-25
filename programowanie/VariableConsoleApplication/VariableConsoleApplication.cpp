#include <iostream>

//Napisz program kt�ry wczyta od u�ytkownika jego wiek i wy�wietli go na konsol.
void task1 ()
{
	short AgeFromUser;
	std::cout << "Podaj sw�j wiek \n";
	std::cin >> AgeFromUser;

	std::cout << "Masz " << AgeFromUser << "lat\n";
}
//Stw�rz program kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry, milimetry i kilometry. Wy�wietl wynik
void task2()
{
	float lenghtInMeterFromUser;
	std::count << "Podaj d�ugo�� w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float lenghtInCentimeter
	lenghtInCentimeter = lenghtInMeterFromUser / 100;
	std::cout << "D�ugo�� w centymetrach wynosi" << lenghtInCentimeter;
}
int main()
{
	//task1();
	task2();
}
/*
Algorytm- zbi�r instrukcji realizuj�cy postawiony przed nim zadanie.
Sposoby zapisania:
* w punktach
* opis s�owny
* j�zyk programowania lub pseudokod
* zbi�r rysumk�w
* schemat blokowy

Zmienna jest to pewien obszar w pami�ci, s�u��cy do przechowywania danych. Te dane mo�na modyfikowa�.
Zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu.

Deklaracja zmiennej- moment utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej- m�wi o wielko�ci obszaru w pami�ci i o rodzaju przechowywanych danych

short- liczby ca�kowite ze znakiem 2 bajty -> 16 bit�w <-32 768; 32 767>
int/long liczby ca�kowite ze znakiem 4 bajty <-2 147 483 648; 2 147 483 647> -2 miliardy do 2 miliard�w
long long liczby ca�kowite ze znakiem 8 bajt�w <- 9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylion�w do 9 trylion�w

Je�eli przed powy�szymi typami danych dodamy s�owo "unsigned" to zakres jest od 0 do podwojnego zakresu g�rnego  plus 1 (32 767*2 + 1)

float- liczby rzeczywiste ze znakiem 4 bajt�w
double- liczby rzeczywiste ze znakiem 8 bajt�w
long double- liczby rzeczywiste ze znakiem 12 bajt�w

Nazwa zmiennnej to nazwa obszaru pami�ci. Poprzez t� nazwe odwo�ujemy si� do tego obszaru

Wymagania kompilatora wzgl�dewm nazwy:
* u�ycie tylko dozwolonych znak�w- alfabet angielski, a-z oraz A-Z
* cyfry arabskie 0-9
* podkre�lenie (pod�oga) _
* pierwszym znakiem nie moaze by� cyfra
* nie mo�e to by� s�owo kluczowo danego j�zyka programowania
* musi by� unikalny w danej widoczno�ci (dana widoczno�� - zakres widoczno�ci zmiennnej)

Wymagania programist�w:
* je�li nazwa sk�ada sie z wielu wyraz�w zamiast spacji u�ywamy znaku podkre�lenia
* u�ywamy znaku podkre�lenia first_number_from_user
* stosujemy camel case< czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
* zaczynamy z du�ej litery np. FirstNumberFromUser
* nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli mie� znaczenie
* Nazwy zmiennych po angielsku

*/