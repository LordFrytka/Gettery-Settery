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
    Samochod(string ma, string mo, int predkosc) : marka(ma), model(mo), maxpredkosc(predkosc) {}

    // Getter dla pola marka
    string PokazMarke() const {
        return marka;
    }

    // Setter dla pola marka
    void PodajMarke(const string &ma) {
        marka = ma;
    }

    // Getter dla pola model
    string PokazModel() const {
        return model;
    }

    // Setter dla pola model
    void PodajModel(const string &mo) {
        model = mo;
    }

    // Getter dla pola maxpredkosc
    int PokazMaxPredkosc() const {
        return maxpredkosc;
    }

    // Setter dla pola maxpredkosc - sprawdza czy wartość jest dodatnia
    void PodajMaxPredkosc(int predkosc) {
        if (predkosc > 0) {
            maxpredkosc = predkosc;
        } else {
            cout << "Prędkość maksymalna musi być dodatnia!" << endl;
        }
    }

    // Wyświetlenie informacji o samochodzie
    void PokazInfo() const {
        cout << "Marka: " << marka << "\nModel: " << model << "\nPrędkość maksymalna: " << maxpredkosc << " km/h" << endl;
    }
};

int main() {
    // Tworzenie obiektu klasy Samochod
    Samochod mojSamochod("Toyota", "Supra", 250);

    // Wyświetlanie informacji o samochodzie
    mojSamochod.PokazInfo();

    // Użycie settera, by zmienić markę i model samochodu
    mojSamochod.PodajMarke("Nissan");
    mojSamochod.PodajModel("GT-R");
    mojSamochod.PodajMaxPredkosc(300);

    // Wyświetlanie zaktualizowanych informacji o samochodzie
    cout << "\nZaktualizowane informacje:" << endl;
    mojSamochod.PokazInfo();

    return 0;
}
