namespace PracticalTasksConsoleApp.Czerwiec2023_6
{
    internal class Task2
    {
        public void Task()
        {
            Film film = new Film();
            Console.WriteLine("Początkowa liczba wypożyczeń: " + film.LiczbeaWypozyczen());
            Console.WriteLine("Początkowy tytuł: " + film.Tytul());
            film.UstawTytul("Shrek");


            Console.WriteLine("Liczba wypożyczeń przed inkrementacją " + film.LiczbeaWypozyczen());
            film.InkrementacjaWypozyczenia();


            Console.WriteLine("Liczba wypożyczeń po inkrementacji " + film.LiczbeaWypozyczen());
            Console.WriteLine("Tytuł po ustawieniu: " + film.Tytul());
        }
    }
}