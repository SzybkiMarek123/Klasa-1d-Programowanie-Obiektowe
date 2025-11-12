namespace PracticalTasksConsoleApp.Czerwiec2022_6
{
    internal class Task5
    {
        public void Task()
        {
            Console.WriteLine($"Liczba zarejestrowanych osób: {Osoba.liczba}\n");
            Osoba pierwszaOsoba = new Osoba();
            Console.WriteLine("Wypisanie pierwszego imienia:");
            pierwszaOsoba.Witaj("Mateusz");
            Console.WriteLine("\n");


            Console.WriteLine("Wprowadź dane do stworzenia drugiego imienia:");
            Console.WriteLine("Wprowadź imię:");
            string name = Console.ReadLine();


            Console.WriteLine("Wprowadź id:");
            int id = int.Parse(Console.ReadLine());


            Osoba drugaOsoba = new Osoba(name, id);
            Console.WriteLine("\n");
            Console.WriteLine("Wypisanie drugiego imienia:");
            drugaOsoba.Witaj("Marek");


            Osoba trzeciaOsoba = new Osoba(drugaOsoba);
            Console.WriteLine("\n");
            Console.WriteLine("Wypisanie trzeciego imienia:");
            trzeciaOsoba.Witaj("Mirek");

            Console.WriteLine("\n");


            Console.WriteLine($"Liczba zarejestrowanych osób: {Osoba.liczba}");
        }
    }
}