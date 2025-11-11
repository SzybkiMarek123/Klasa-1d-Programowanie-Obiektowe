namespace PracticalTasksConsoleApp.Czerwiec2022_6
{
    internal class Task5
    {
        public void Task()
        {
            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.liczba}\n");
            Osoba firstPerson = new Osoba();
            Console.WriteLine("Wypisanie imienia z pierwszego obiektu:");
            firstPerson.Witaj("Mateusz");

            Console.WriteLine("\n");

            Console.WriteLine("Wprowadź dane do stworzenia drugiego obiektu:");
            Console.WriteLine("Wprowadź imię:");
            string name = Console.ReadLine();

            Console.WriteLine("Wprowadź id:");
            int id = int.Parse(Console.ReadLine());

            Osoba secondPerson = new Osoba(name, id);
            Console.WriteLine("\n");
            Console.WriteLine("Wypisanie imienia z drugiego obiektu:");
            secondPerson.Witaj("Marek");

            Osoba thirdPerson = new Osoba(secondPerson);
            Console.WriteLine("\nWypisanie imienia z trzeciego obiektu:");
            thirdPerson.Witaj("Mirek");

            Console.WriteLine("\n");

            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.liczba}");
        }
    }
}