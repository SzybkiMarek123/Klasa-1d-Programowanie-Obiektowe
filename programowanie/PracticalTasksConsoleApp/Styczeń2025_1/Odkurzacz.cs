namespace PracticalTasksConsoleApp.Styczeń2025_1
{
    internal class Odkurzacz : Urzadzenie
    {
        private bool wlaczony = false;

        public void on()
        {
            if (!wlaczony)
            {
                wlaczony = true;
                Informacje("Odkurzacz włączony");
            }
        }

        public void off()
        {
            if (wlaczony)
            {
                wlaczony = false;
                Informacje("Odkurzacz wyłączony");
            }
        }
    }
}