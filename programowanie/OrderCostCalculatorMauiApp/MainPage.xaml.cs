namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        private string nazwaProduktu;
        public string NazwaProduktu
        {
            get { return nazwaProduktu; }
            set
            {
                nazwaProduktu = value;
                OnPropertyChanged();
            }
        }

        private double cenaZaSztuke;
        public double CenaZaSztuke
        {
            get { return cenaZaSztuke; }
            set
            {
                cenaZaSztuke = value;
                OnPropertyChanged();
            }
        }

        private int liczbaSztuk;
        public int LiczbaSztuk
        {
            get { return liczbaSztuk; }
            set
            {
                liczbaSztuk = value;
                OnPropertyChanged();
            }
        }

        private bool dostawaEkspresowa;
        public bool DostawaEkspresowa
        {
            get { return dostawaEkspresowa; }
            set
            {
                dostawaEkspresowa = value;
                OnPropertyChanged();
            }
        }

        private string podsumowanie;
        public string Podsumowanie
        {
            get { return podsumowanie; }
            set
            {
                podsumowanie = value;
                OnPropertyChanged();
            }
        }

        public void ObliczKoszt()
        {
            if (string.IsNullOrWhiteSpace(NazwaProduktu) ||
                CenaZaSztuke <= 0 ||
                LiczbaSztuk < 1 ||
                LiczbaSztuk > 10)
            {
                Podsumowanie = "Wprowadź poprawne dane.";
                return;
            }

            double kosztProduktu = CenaZaSztuke * LiczbaSztuk;
            double kosztDostawy = DostawaEkspresowa ? 15 : 0;
            double kosztCalkowity = kosztProduktu + kosztDostawy;

            Podsumowanie =
                $"Produkt: {NazwaProduktu}\n" +
                $"Cena za sztukę: {CenaZaSztuke:F2} zł\n" +
                $"Liczba sztuk: {LiczbaSztuk}\n" +
                $"Dostawa ekspresowa: {(DostawaEkspresowa ? "TAK" : "NIE")}\n" +
                $"Łączny koszt: {kosztCalkowity:F2} zł";
        }

        private Command polecenieObliczania;

        public Command PolecenieObliczania
        {
            get
            {
                if (polecenieObliczania == null)
                {
                    polecenieObliczania = new Command(ObliczKoszt);
                }

                return polecenieObliczania;
            }
        }

        public MainPage()
        {
            InitializeComponent();
            LiczbaSztuk = 1;
            BindingContext = this;
        }
    }
}