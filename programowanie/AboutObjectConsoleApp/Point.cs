namespace AboutObjectConsoleApp
{
    internal class Point
    {
        private int x;
        private int y;

        public Point()
        {
            x = 15;
            y = 68;
        }

        public Point(int a, int b)
        {
            x = a;
            y = b;
        }


        public void SetX(int x)
        {
            this.x = x;
        }

        public int GetX() 
        {
            return x;
        }
        public void Show()
        {
            Console.WriteLine($"({x},{y})");
        }
    }
}