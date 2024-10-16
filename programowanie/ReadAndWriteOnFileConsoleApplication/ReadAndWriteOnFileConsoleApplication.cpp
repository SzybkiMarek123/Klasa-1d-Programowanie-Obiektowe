
#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imie:\n";
    std::cin >> name;

    std::cout << "Podaj swój wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt", std::ios::app);

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();
        writeInFile << age << "\n";

        writeInFile.close();
    }
    else
        std::cout << "B³¹d otwarcia pliku\n";
}

//Odczyt zpliku tekstowego
void task2()
{
    std::string name;
    int age;
    std::ifstream readFromFile;
    readFromFile.open("c:\\dane.txt");
    if (readFromFile.is_open())
    {
        while (readFromFile.eof() == false)
        {
            readFromFile >> name;
            readFromFile >> age;

            std::cout << "Imie: " << name << " ,wiek: " << age << "\n";
            readFromFile.close();
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Dane s¹ buforowane, kiedy bufor siê przepe³ni wysy³a dane do pliku.
Metoda flush wymusza opró?nienie bufora.
Metoda close wywo³uje metode flush.
*/
