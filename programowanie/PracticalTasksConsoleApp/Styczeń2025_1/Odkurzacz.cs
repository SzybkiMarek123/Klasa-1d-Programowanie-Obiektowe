namespace PracticalTasksConsoleApp.Styczeń2025_1
{
    internal class Odkurzacz1 : Urzadzenie
    {
        private bool wlaczony = false;

        public void on()
        {
            if (!wlaczony)
            {
                wlaczony = true;
                Informacje("Odkurzacz włączono");
            }
        }

        public void off()
        {
            if (wlaczony)
            {
                wlaczony = false;
                Informacje("Odkurzacz wyłączono");
            }
        }
    }
}