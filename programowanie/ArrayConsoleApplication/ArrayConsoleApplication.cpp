#include <iostream>
void task1()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;

    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << "Podaj " << (i + 1) << " liczbê\n";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}
void task2() 
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 101;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int sum = numbers[0];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        sum = sum + numbers[i];
    } 

    double arithmeticAverage = sum * 1.0 / ARRAY_NUMBER_SIZE;

    std::cout << "Średnia arytmetyczna tych elementów tablicy wynosi: " << arithmeticAverage << "\n";
}

//Program szukający maksimum i minimum z tablicy wypełnionej liczbami pseudolosowymi;
void task3()
{
    const unsigned int ARRAY_NUMBER_SIZE = 100;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 101;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    int max = numbers[0];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    std::cout << "Maksymalna liczba pod względem wielkości w tablicy wynosi: " << max << "\n";

    int min = numbers[0];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    std::cout << "Najmniejsza liczba pod względem wielkości w tablicy wynosi: " << min << "\n";
}
void task4()
{
    int numberFromUser;
    std::cout << "Podaj numer dnia tygodnia: \n";
    std::cin >> numberFromUser;

    std::string nameOfDay[7];
    nameOfDay[0] = "Poniedziałek";
    nameOfDay[1] = "Wtorek";
    nameOfDay[2] = "Środa";
    nameOfDay[3] = "Czwartek";
    nameOfDay[4] = "Piątek";
    nameOfDay[5] = "Sobota";
    nameOfDay[6] = "Niedziela";

    if (numberFromUser >= 0 && numberFromUser <= 6)
    {
        std::cout << "Nazwa dnia to: " << nameOfDay[numberFromUser] << "n";
    } else
    {
        std::cout << "Nie ma takiego dnia\n";
    }
}
void task7()
{
    const unsigned int ARRAY_NUMBER_SIZE = 10;

    srand(time(NULL));

    std::cout << "Liczby w kolekcji: \n";
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = rand() % 100;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    for (int i = 0; i < ARRAY_NUMBER_SIZE - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < ARRAY_NUMBER_SIZE; j++)
        {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        int tmp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = tmp;
    }

    std::cout << "Po sortowaniu:\n";
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << numbers[i] << ", ";
    }
}

int main()
{
    //task1();
    //task2();
    //task3();
    task4();
}