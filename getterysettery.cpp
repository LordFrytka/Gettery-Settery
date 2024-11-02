// Program Kacpra Maciejewskiego 3P

#include <iostream>
#include <string>

using namespace std;

class Samochod {
private:
    // Pola prywatne do których dostęp jest możliwy tylko przez metody publiczne
    string marka;
    string model;
    int maxpredkosc;

public:
    // Konstruktor klasy Samochod
    Car(string marka, string model, int predkosc) : marka(b), model(m), maxpredkosc(predkosc) {}

    // Getter dla pola 'marka'
    string PokazMarke() const {
        return marka;
    }

    // Setter dla pola 'marka'
    void PodajMarke(const string &marka) {
        marka = marka;
    }

    // Getter dla pola 'model'
    string PokazModel() const {
        return model;
    }

    // Setter dla pola 'model'
    void PodajModel(const string &model) {
        model = model;
    }

    // Getter dla pola 'maxpredkosc'
    int PokazMaxPredkosc() const {
        return maxpredkosc;
    }

    // Setter dla pola 'maxpredkosc' - sprawdza, czy wartość jest dodatnia
    void PodajMaxPredkosc(int predkosc) {
        if (predkosc > 0) {
            maxpredkosc = predkosc;
        } else {
            cout << "Prędkość maksymalna musi być dodatnia!" << endl;
        }
    }

    // Funkcja wyświetlająca informacje o samochodzie
    void PokazInfo() const {
        cout << "Marka: " << marka << "\nModel: " << model << "\nPrędkość maksymalna: " << maxpredkosc << " km/h" << endl;
    }
};

int main() {
    // Tworzymy obiekt klasy Car
    Samochod mojSamochod("Toyota", "Supra", 250);

    // Wyświetlamy informacje o samochodzie
    mojSamochod.PokazInfo();

    // Użycie settera, by zmienić markę i model samochodu
    mojSamochod.PodajMarke("Nissan");
    mojSamochod.PodajModel("GT-R");
    mojSamochod.PodajMaxPredkosc(300);

    // Wyświetlamy zaktualizowane informacje o samochodzie
    cout << "\nZaktualizowane informacje:" << endl;
    mojSamochod.PokazInfo();

    return 0;
}