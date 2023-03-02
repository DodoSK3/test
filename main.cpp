#include <iostream>
using namespace std;

int main () {

    cout << "Kalkulacka" << endl << endl;

    cout << "Vyber si operaciu:" << endl;

    cout << "1 - Scitanie" << endl;
    cout << "2 - Odcitanie" << endl;
    cout << "3 - Nasobenie" << endl;
    cout << "4 - Delenie" << endl << endl;

    cout << "Zadaj cislo operacie:";

    int volba;
    cin >> volba;

    if (volba == 1) {
        cout << "Scitanie" << endl;
        cout << "Zadaj dve cisla pre scitanie:";
        int cislo1_scitanie;
        int cislo2_scitanie;
        cin >> cislo1_scitanie >> cislo2_scitanie;
        cout << "Zadal si cisla: " << cislo1_scitanie << " a " << cislo2_scitanie << endl;
        int vysledok_scitanie = cislo1_scitanie + cislo2_scitanie;
        cout << "Vysledok po scitani je: " << vysledok_scitanie;
    }

    if (volba == 2) {
        cout << "Odcitanie" << endl;
        cout << "Zadaj dve cisla pre odcitanie:";
        int cislo1_odcitanie;
        int cislo2_odcitanie;
        cin >> cislo1_odcitanie >> cislo2_odcitanie;
        cout << "Zadal si cisla: " << cislo1_odcitanie << " a " << cislo2_odcitanie << endl;
        int vysledok_odcitanie = cislo1_odcitanie - cislo2_odcitanie;
        cout << "Vysledok po odcitani je: " << vysledok_odcitanie;
    }



    return 0;
}
