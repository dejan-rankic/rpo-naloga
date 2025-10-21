#include <iostream>
using namespace std;

double saberi(double prviBroj, double drugiBroj) {
    return prviBroj + drugiBroj;
}

double oduzmi(double prviBroj, double drugiBroj) {
    return prviBroj - drugiBroj;
}

double pomnozi(double prviBroj, double drugiBroj) {
    return prviBroj * drugiBroj;
}

double podeli(double prviBroj, double drugiBroj) {
    if (drugiBroj == 0) {
        cout << "Greska: deljenje sa nulom!" << endl;
        return 0;
    }
    return prviBroj / drugiBroj;
}

int main() {
 52e3fbf (Revert "Fast-forward commit")
    cout << "Jednostavan kalkulator" << endl;
    cout << "Izaberi operaciju:" << endl;
    cout << "1. Sabiranje" << endl;
    cout << "2. Oduzimanje" << endl;
    cout << "3. Mnozenje" << endl;
    cout << "4. Deljenje" << endl;

    int izborOperacije;
    cout << "Unesi broj operacije (1/2/3/4): ";
    cin >> izborOperacije;

    double prviBroj, drugiBroj;
    cout << "Unesi prvi broj: ";
    cin >> prviBroj;
    cout << "Unesi drugi broj: ";
    cin >> drugiBroj;

    switch(izborOperacije) {
        case 1:
            cout << "Rezultat: " << saberi(prviBroj, drugiBroj) << endl;
            break;
        case 2:
            cout << "Rezultat: " << oduzmi(prviBroj, drugiBroj) << endl;
            break;
        case 3:
            cout << "Rezultat: " << pomnozi(prviBroj, drugiBroj) << endl;
            break;
        case 4:
            cout << "Rezultat: " << podeli(prviBroj, drugiBroj) << endl;
            break;
        default:
            cout << "Nevalidan izbor!" << endl;
    }

    return 0;
}
