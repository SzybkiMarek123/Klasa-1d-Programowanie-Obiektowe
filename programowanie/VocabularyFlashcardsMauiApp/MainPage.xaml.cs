
using System.Collections.ObjectModel;
using System.Windows.Input;
using VocabularyFlashcardsMauiApp.Data;

namespace VocabularyFlashcardsMauiApp
{
    public partial class MainPage : ContentPage
    {
        public ObservableCollection<Karty> Karty { get; set; }

        private bool widoczne;
        public bool Widoczne
        {
            get
            {
                return widoczne;
            }
            set
            {
                widoczne = value;
                OnPropertyChanged();
            }
        }

        private string tekstT = "";
        public string TekstT
        {
            get
            {
                return tekstT;
            }
            set
            {
                tekstT = value;
                OnPropertyChanged();
            }
        }

        public ICommand Tlumaczenie { get; set; }
        public ICommand Reset { get; set; }

        public MainPage()
        {
            InitializeComponent();

            Karty = new ObservableCollection<Karty>
            {
                new Karty
                {
                    Angielski = "Apple",
                    Polski = "Jabłko"
                },
                new Karty
                {
                    Angielski = "House",
                    Polski = "Dom"
                },
                new Karty
                {
                    Angielski = "Dog",
                    Polski = "Pies"
                },
                new Karty
                {
                    Angielski = "Book",
                    Polski = "Książka"
                },
                new Karty
                {
                    Angielski = "Bike",
                    Polski = "Rower"
                }
            };

            Widoczne = false;
            TekstT = "";

            Tlumaczenie = new Command(() =>
            {
                if (Karuzela.CurrentItem is Karty karta)
                {
                    TekstT = karta.Polski;
                    Widoczne = true;
                }
            });

            Reset = new Command(() =>
            {
                Karuzela.Position = 0;
                TekstT = "";
                Widoczne = false;
            });

            BindingContext = this;
        }

        private void KaruzelaZ(object sender, CurrentItemChangedEventArgs e)
        {
            TekstT = "";
            Widoczne = false;
        }
    }
}
