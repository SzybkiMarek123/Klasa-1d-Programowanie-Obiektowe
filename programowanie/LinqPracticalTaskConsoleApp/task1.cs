using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinqPracticalTasksConsoleApp;

/*
========================================
== POZIOM 1 � PODSTAWOWY ==
========================================

1. Znajd� wszystkie osoby z Krakowa.
2. Znajd� osoby pe�noletnie.
3. Posortuj osoby po wieku rosn�co.
4. Posortuj osoby po nazwisku malej�co.
5. Wypisz tylko imi� i nazwisko ka�dej osoby.
6. Wypisz tylko miasta bez duplikat�w.
7. Oblicz liczb� os�b z Warszawy.
8. Oblicz �redni� pensj� wszystkich os�b.
9. Znajd� najm�odsz� osob�.
10. Sprawd�, czy jest kto� z Gda�ska.


========================================
== POZIOM 2 � �REDNI ==
========================================

11. Posortuj osoby po mie�cie, a w ramach miasta po pensji malej�co.
12. Znajd� osoby w wieku od 25 do 35 lat (w��cznie).
13. Oblicz sum� pensji os�b z Kielc.
14. Znajd� pierwsz� osob�, kt�rej pensja jest wi�ksza ni� 10 000.
15. Znajd� ostatni� osob� w kolejno�ci alfabetycznej po nazwisku.
16. Wygeneruj dane os�b w formacie: "Imi� Nazwisko (Miasto)".
17. Sprawd�, czy wszyscy maj� co najmniej 18 lat.
18. Policz, ile jest kobiet.
19. Znajd� osoby, kt�re zarabiaj� wi�cej ni� �rednia pensja.
20. Znajd� najstarsz� osob� z Krakowa.


========================================
== POZIOM 3 � ZAAWANSOWANY ==
========================================

21. Znajd� osoby, kt�re maj� skill "C#".
22. Znajd� osoby, kt�re maj� co najmniej trzy skille.
23. Znajd� osoby z Warszawy, posortuj je po wieku malej�co i wypisz tylko ich imi�, nazwisko, wiek i pensj�.
24. Sprawd�, czy kto� ma skill "Azure".
25. Sprawd�, czy wszyscy zarabiaj� co najmniej 4000.
26. Znajd� osob� o najwi�kszej pensji.
27. Znajd� osob� o najmniejszej pensji.
28. Wypisz osoby, kt�re maj� taki sam wiek jak najstarsza osoba.


========================================
== POZIOM 4 � EKSTRA / DLA CH�TNYCH ==
========================================

29. Posortuj osoby wed�ug liczby posiadanych skilli.
30. Podziel osoby na dwie listy: zarabiaj�cych przynajmniej 8000 oraz zarabiaj�cych mniej ni� 8000.
31. Przyporz�dkuj ka�d� osob� do przedzia�u wiekowego (np. 20�29, 30�39, 40�49) i wypisz osoby z ka�dego przedzia�u.

*/

internal class Task1
{
    void Print<T>(string title, IEnumerable<T> data)
    {
        Console.WriteLine($"\n=== {title} ===");
        foreach (var item in data)
            Console.WriteLine(item);
    }

    public void DoTasks()
    {
        var people = new List<Person>
        {
            new Person() { Id=1, FirstName="Anna",  LastName="Nowak",    Age=29, Gender=Gender.Female, City="Kielce", Salary=8200m,  Skills=["C#", "LINQ", "SQL"] },
            new() { Id=2, FirstName="Marek", LastName="Kowalski", Age=43, Gender=Gender.Male,   City="Warszawa", Salary=15000m, Skills=["Azure", "C#", "DevOps"] },
            new() { Id=3, FirstName="Ewa",   LastName="Wi�niewska",Age=35, Gender=Gender.Female, City="Krak�w", Salary=9800m,  Skills=["JavaScript", "React"] },
            new() { Id=4, FirstName="Jan",   LastName="Zieli�ski", Age=43, Gender=Gender.Male,   City="Gda�sk", Salary=12000m, Skills=["C#", "SQL"] },
            new() { Id=5, FirstName="Ola",   LastName="Maj",       Age=26, Gender=Gender.Female, City="Kielce", Salary=7200m,  Skills=["Python", "ML"] },
            new() { Id=6, FirstName="Piotr", LastName="Lewandowski",Age=37,Gender=Gender.Male,   City="Warszawa", Salary=13400m, Skills=["C#", "LINQ", "Azure"] },
            new() { Id=7, FirstName="Iga",   LastName="Kowal",     Age=31, Gender=Gender.Female, City="Krak�w", Salary=9900m,  Skills=["Go", "Kubernetes"] },
            new() { Id=8, FirstName="Tomek", LastName="Sikora",    Age=29, Gender=Gender.Male,   City="Kielce", Salary=8800m,  Skills=["C#", "MAUI", "Bluetooth"] },
        };

        // === POZIOM 1 ===

        // Zadanie 1
        var q1 = people.Where(p => p.City == "Krak�w");
        Print("Zadanie 1", q1);

        //Zadanie 2
        var q2 = people.Where(p => p.Age > 18);
        Print("Zadanie 2", q2);

        //Zadanie 3
        var q3 = people.OrderBy(p => p.Age);
        Print("Zadanie 3", q3);

        //Zadanie 4
        var q4 = people.OrderBy(p => p.LastName);
        Print("Zadanie 4", q4);

        //Zadanie 5
        var q5 = people.Select(p => new { FirstName = p.FirstName, lastname = p.LastName });
        Print("Zadanie 5", q5);

        //Zadanie 6
        var q6 = people.Select(p => p.City).Distinct();
        Print("Zadanie 6", q6);

        //Zadanie 7
        var q7 = people.Count(p => p.City == "Warszawa");
        Console.WriteLine($"Zadanie 7 liczba osób {q7}");

        //Zadanie 8
        var q8 = people.Average(p => p.Salary);
        Console.WriteLine($"Zadanie 8 średnia pensja {q8}");

        //Zadanie 9
        var q9 = people.OrderBy(p => p.Age).First();
        Console.WriteLine($"Zadanie 9 najmłodsza {q9}");

        //Zadanie 10
        var q10 = people.Any(p => p.City == "Gdańsk");
        Console.WriteLine($"Zadanie 9 osoba z Gdańska {q10}");


        // === POZIOM 2 ===

        //Zadanie 11
        var q11 = people.Any(p => p.City == "Gdańsk");
        Console.WriteLine($"Zadanie 9 osoba z Gdańska {q10}");
    }
}