/*
Zadanie – Fiszki do nauki słówek

Napisz aplikację w .NET MAUI, która pomaga powtarzać angielskie
słówka. Całość umieść na jednej stronie MainPage, bez nawigacji.

Przygotuj w programie kolekcję fiszek. Każda fiszka powinna
przechowywać angielskie słowo i jego polskie tłumaczenie:
- apple – jabłko,
- house – dom,
- dog – pies,
- book – książka,
- bike – rower.

Aplikacja powinna zawierać:
- CarouselView wyświetlający angielskie słowo na każdej karcie,
- IndicatorView pokazujący aktualną pozycję wśród fiszek,
- przycisk „Pokaż tłumaczenie”,
- Label pod karuzelą, przeznaczony na polskie tłumaczenie,
- przycisk „Zacznij od początku”.

Działanie aplikacji:
- po uruchomieniu wyświetlana jest pierwsza fiszka,
- użytkownik przegląda fiszki, przesuwając karty,
- początkowo tłumaczenie jest ukryte,
- po naciśnięciu „Pokaż tłumaczenie” wyświetl tłumaczenie słowa
 z aktualnie widocznej karty,
- po zmianie fiszki wyczyść tłumaczenie, aby użytkownik mógł
 samodzielnie przypomnieć sobie znaczenie kolejnego słowa,
- przycisk „Zacznij od początku” wyświetla pierwszą fiszkę
 i również czyści tłumaczenie.

Angielskie słowo na karcie wyświetl za pomocą bindingu.

Przykład:
Aktualna karta: house
Przed naciśnięciem przycisku: tłumaczenie niewidoczne.
Po naciśnięciu „Pokaż tłumaczenie”: dom.
Po przejściu do kolejnej fiszki: tłumaczenie ponownie niewidoczne.
adadasdadddadasdaaasdasddsaasd
*/
using System.Collections.ObjectModel;
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
        private string tekstT;
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
        public MainPage()
        {
            Karty = new ObservableCollection<Karty>
            {
             new Karty{
             Angielski = "Apple",
             Polski = "Jabłko"
             },
             new Karty{
             Angielski = "House",
             Polski = "Dom"
             },
             new Karty{
             Angielski = "Dog",
             Polski = "Pies"
             },
             new Karty{
             Angielski = "Book",
             Polski = "Książka"
             },
             new Karty{
             Angielski = "Bike",
             Polski = "Rower"
             }
            };

            InitializeComponent();
        }
    }
}
