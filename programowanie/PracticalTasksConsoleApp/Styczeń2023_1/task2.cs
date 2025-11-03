namespace PracticalTasksConsoleApp.Styczeń2023_1
{
    internal class Task2
    {
        public void Task()
        {
            Notatka notatka1 = new Notatka("Zoo", "Iść w sobote do zoo.");
            Notatka notatka2 = new Notatka("Komputer", "Jutro zgrać pliki");

            Console.WriteLine("Pierwsza notatka:");
            notatka1.Wyswietl();

            Console.WriteLine("\nDruga notatka:");
            notatka2.Wyswietl();
        }
    }
}
