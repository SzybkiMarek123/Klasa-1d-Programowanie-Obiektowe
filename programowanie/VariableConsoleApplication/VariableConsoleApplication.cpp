#include <iostream>
/*



* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.

* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/

//Napisz program który wczyta od u¿ytkownika jego wiek i wyœwietli go na konsol.
void task1()
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
	std::cout << "Podaj d³ugosc w metrach: ";
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

//*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.
void task3()
{
	float lenghtSideAFromUser;
	float lenghtSideBFromUser;
	float rectangleArea;

	std::cout << "Podaj d³ugoœæ pierwszego boku: " ;
	std::cin >> lenghtSideAFromUser ;

	std::cout << "Podaj d³ugoœæ drugiego boku: ";
	std::cin >> lenghtSideBFromUser ;
	
	rectangleArea = lenghtSideAFromUser * lenghtSideBFromUser;
	std::cout << "Pole prostok¹ta wynosi: " << rectangleArea ;
}

//*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
void task4()
{
	float lenghtSideAFromUser ;
	float lenghtHeightHFromUser ;
	float triangleArea ;

	std::cout << "Podaj d³ugoœæ podstawy trójk¹ta: ";
	std::cin >> lenghtSideAFromUser ;

	std::cout << "Podaj wysokoœæ trójk¹ta ";
	std::cin >> lenghtHeightHFromUser ;

	triangleArea = lenghtSideAFromUser * lenghtHeightHFromUser / 2 ;
	std::cout << "Pole trójk¹ta wynosi: " << triangleArea;
}

//*Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.
void task5()
{
	float lenghtRadiusFromUser;
	float circleArea;

	std::cout << "Podaj d³ugoœæ promienia: ";
	std::cin >> lenghtRadiusFromUser ;

	circleArea = lenghtRadiusFromUser * lenghtRadiusFromUser * 3.14;
	std::cout << "Pole ko³a wynosi: " << circleArea ;
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
Algorytm- skoñczony zbiór instrukcji realizuj¹cy postawiony przed nim zadanie. Kolejnoœæ instrukcji w zbiorze jest okreœlona
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