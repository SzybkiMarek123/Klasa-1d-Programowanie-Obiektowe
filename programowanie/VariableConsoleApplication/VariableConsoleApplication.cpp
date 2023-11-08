#include <iostream>
/*



* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.

* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/

//Napisz program kt�ry wczyta od u�ytkownika jego wiek i wy�wietli go na konsol.
void task1()
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
	std::cout << "Podaj d�ugosc w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float lenghtInCentimiterFromUser;
	lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

	float lenghtInMilimiterFromUser;
	lenghtInMilimiterFromUser = lenghtInCentimiterFromUser * 10;

	float lenghtKilometerFromUser;
	lenghtKilometerFromUser = lenghtInMeterFromUser / 1000;

	std::cout << "Metry:" << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry:" << lenghtInCentimiterFromUser << "\n";
	std::cout << "Milimetry:" << lenghtInMilimiterFromUser << "\n";
	std::cout << "Kilometry:" << lenghtKilometerFromUser << "\n";

}

//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.
void task3()
{
	float lenghtSideAFromUser;
	float lenghtSideBFromUser;
	float rectangleArea;

	std::cout << "Podaj d�ugo�� pierwszego boku: " ;
	std::cin >> lenghtSideAFromUser ;

	std::cout << "Podaj d�ugo�� drugiego boku: ";
	std::cin >> lenghtSideBFromUser ;
	
	rectangleArea = lenghtSideAFromUser * lenghtSideBFromUser;
	std::cout << "Pole prostok�ta wynosi: " << rectangleArea ;
}

//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
void task4()
{
	float lenghtSideAFromUser ;
	float lenghtHeightHFromUser ;
	float triangleArea ;

	std::cout << "Podaj d�ugo�� podstawy tr�jk�ta: ";
	std::cin >> lenghtSideAFromUser ;

	std::cout << "Podaj wysoko�� tr�jk�ta ";
	std::cin >> lenghtHeightHFromUser ;

	triangleArea = lenghtSideAFromUser * lenghtHeightHFromUser / 2 ;
	std::cout << "Pole tr�jk�ta wynosi: " << triangleArea;
}

//*Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
void task5()
{
	float lenghtRadiusFromUser;
	float circleArea;

	std::cout << "Podaj d�ugo�� promienia: ";
	std::cin >> lenghtRadiusFromUser ;

	circleArea = lenghtRadiusFromUser * lenghtRadiusFromUser * 3.14;
	std::cout << "Pole ko�a wynosi: " << circleArea ;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}
/*
Algorytm- sko�czony zbi�r instrukcji realizuj�cy postawiony przed nim zadanie. Kolejno�� instrukcji w zbiorze jest okre�lona
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