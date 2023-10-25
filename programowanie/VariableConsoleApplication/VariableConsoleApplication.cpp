#include <iostream>

//Napisz program który wczyta od u¿ytkownika jego wiek i wyœwietli go na konsol.
void task1 ()
{
	short AgeFromUser;
	std::cout << "Podaj swój wiek \n";
	std::cin >> AgeFromUser;

	std::cout << "Masz " << AgeFromUser << "lat\n";
}
//Stwórz program który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry, milimetry i kilometry. Wyœwietl wynik
void task2()
{
	float lenghtInMeterFromUser;
	std::count << "Podaj d³ugoœæ w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float lenghtInCentimeter
	lenghtInCentimeter = lenghtInMeterFromUser / 100;
	std::cout << "D³ugoœæ w centymetrach wynosi" << lenghtInCentimeter;
}
int main()
{
	//task1();
	task2();
}
/*
Algorytm- zbiór instrukcji realizuj¹cy postawiony przed nim zadanie.
Sposoby zapisania:
* w punktach
* opis s³owny
* jêzyk programowania lub pseudokod
* zbiór rysumków
* schemat blokowy

Zmienna jest to pewien obszar w pamiêci, s³u¿¹cy do przechowywania danych. Te dane mo¿na modyfikowaæ.
Zmienna pozwala przechowywaæ tylko jedn¹ wartoœæ w danym momencie czasu.

Deklaracja zmiennej- moment utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej- mówi o wielkoœci obszaru w pamiêci i o rodzaju przechowywanych danych

short- liczby ca³kowite ze znakiem 2 bajty -> 16 bitów <-32 768; 32 767>
int/long liczby ca³kowite ze znakiem 4 bajty <-2 147 483 648; 2 147 483 647> -2 miliardy do 2 miliardów
long long liczby ca³kowite ze znakiem 8 bajtów <- 9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylionów do 9 trylionów

Je¿eli przed powy¿szymi typami danych dodamy s³owo "unsigned" to zakres jest od 0 do podwojnego zakresu górnego  plus 1 (32 767*2 + 1)

float- liczby rzeczywiste ze znakiem 4 bajtów
double- liczby rzeczywiste ze znakiem 8 bajtów
long double- liczby rzeczywiste ze znakiem 12 bajtów

Nazwa zmiennnej to nazwa obszaru pamiêci. Poprzez t¹ nazwe odwo³ujemy siê do tego obszaru

Wymagania kompilatora wzglêdewm nazwy:
* u¿ycie tylko dozwolonych znaków- alfabet angielski, a-z oraz A-Z
* cyfry arabskie 0-9
* podkreœlenie (pod³oga) _
* pierwszym znakiem nie moaze byæ cyfra
* nie mo¿e to byæ s³owo kluczowo danego jêzyka programowania
* musi byæ unikalny w danej widocznoœci (dana widocznoœæ - zakres widocznoœci zmiennnej)

Wymagania programistów:
* jeœli nazwa sk³ada sie z wielu wyrazów zamiast spacji u¿ywamy znaku podkreœlenia
* u¿ywamy znaku podkreœlenia first_number_from_user
* stosujemy camel case< czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
* zaczynamy z du¿ej litery np. FirstNumberFromUser
* nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli mieæ znaczenie
* Nazwy zmiennych po angielsku

*/