#include <iostream>
/*

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

	std::cout << "Podaj d�ugo�� pierwszego boku: ";
	std::cin >> lenghtSideAFromUser;

	std::cout << "Podaj d�ugo�� drugiego boku: ";
	std::cin >> lenghtSideBFromUser;

	rectangleArea = lenghtSideAFromUser * lenghtSideBFromUser;
	std::cout << "Pole prostok�ta wynosi: " << rectangleArea;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
void task4()
{
	float lenghtSideAFromUser;
	float lenghtHeightHFromUser;
	float triangleArea;

	std::cout << "Podaj d�ugo�� podstawy tr�jk�ta: ";
	std::cin >> lenghtSideAFromUser;

	std::cout << "Podaj wysoko�� tr�jk�ta ";
	std::cin >> lenghtHeightHFromUser;

	triangleArea = lenghtSideAFromUser * lenghtHeightHFromUser / 2;
	std::cout << "Pole tr�jk�ta wynosi: " << triangleArea;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
void task5()
{
	float lenghtRadiusFromUser;
	float circleArea;

	std::cout << "Podaj d�ugo�� promienia: ";
	std::cin >> lenghtRadiusFromUser;

	circleArea = lenghtRadiusFromUser * lenghtRadiusFromUser * 3.14;
	std::cout << "Pole ko�a wynosi: " << circleArea;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.
void task6()
{
	float lenghtSideA;
	float lenghtSideB;
	float lenghtHeightH;
	float trapezeArea;

	std::cout << "Podaj d�ugo�� pierwszej podstawy trapezu: ";
	std::cin >> lenghtSideA;

	std::cout << "Podaj d�ugo�� drugiej podstawy trapezu: ";
	std::cin >> lenghtSideB;

	std::cout << "Podaj wysoko�� trapezu ";
	std::cin >> lenghtHeightH;

	trapezeArea = (lenghtSideA + lenghtSideB) * lenghtHeightH / 2;
	std::cout << "Pole trapeza wynosi: " << trapezeArea;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.
void task7()
{
	float lenghtEdge;
	float cubeCapacity;

	std::cout << "Podaj d�ugo�� kraw�dzi sze�cianu: ";
	std::cin >> lenghtEdge;

	cubeCapacity = lenghtEdge * lenghtEdge * lenghtEdge;
	std::cout << "Obj�to�� sze�cianu wynosi: " << cubeCapacity;

}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.
void task8()
{
	float degreesCelcius;
	float degreesFarenheit;

	std::cout << "Podaj temperature w stopniach celcjusza: ";
	std::cin >> degreesCelcius;

	degreesFarenheit = 1.8 * degreesCelcius + 32;

	std::cout << "Podaj temperature w stopniach Farenheit wynosi: " << degreesFarenheit;

}
//*Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task9()
{
	float amountInPln;
	float amountInEuro;
	std::cout << "Podaj kwote w euro: ";
	std::cin >> amountInEuro;

	amountInPln = amountInEuro * 4.42;
	std::cout << "Kwota w z�ot�wkach wynosi:" << amountInPln;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb(a, b) i obliczy �redni� arytmetyczn� tych liczb.Nast�pnie wy�wietli wynik.
void task10()
{
	float numberA;
	float numberB;
	float arithmeticAverage;

	std::cout << "Podaj pierwsz� liczbe";
	std::cin >> numberA;

	std::cout << "Podaj drug� liczbe";
	std::cin >> numberB;

	arithmeticAverage = (numberA + numberB) / 2;

	std::cout << "Srednia wynosi" << arithmeticAverage;
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb(a, b, c) i obliczy �redni� arytmetyczn� tych liczb.Nast�pnie wy�wietli wynik.
void task11()
{
	float numberA;
	float numberB;
	float numberC;
	float arithmeticAverage;

	std::cout << "Podaj pierwsz� liczbe";
	std::cin >> numberA;

	std::cout << "Podaj drug� liczbe";
	std::cin >> numberB;

	std::cout << "Podaj trzeci� liczbe";
	std::cin >> numberC;

	arithmeticAverage = (numberA + numberB + numberC) / 3;
	std::cout << "Srednia wynosi" << arithmeticAverage;
}
//*Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task12()
{
	float numberA;
	float weightNumberA;
	float numberB;
	float weightNumberB;
	float numberC;
	float weightNumberC;
	float weightedAverage;

	std::cout << "Podaj pierwsz� liczbe";
	std::cin >> numberA;
	std::cout << "Podaj pierwsz� wage";
	std::cin >> weightNumberA;

	std::cout << "Podaj drug� liczbe";
	std::cin >> numberB;
	std::cout << "Podaj drug� wage";
	std::cin >> weightNumberB ;

	std::cout << "Podaj trzeci� liczbe";
	std::cin >> numberC;
	std::cout << "Podaj trzeci� wage";
	std::cin >> weightNumberC;

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	task12();
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