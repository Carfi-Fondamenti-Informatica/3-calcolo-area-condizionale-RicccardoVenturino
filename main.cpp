#include <iostream>
using namespace std;

int main() {
    float a = 0, b = 0, Atriangolo = 0, Aquadrato = 0, Arettangolo = 0;
    int opzione = 0;
    cout << "Inserire due valori reali:" << endl;
    cin >> a >> b;
    cout << "Selezionare l\'area che si vuole calcolare:" << endl;
    cout << "0) area del triangolo di base " << a << " e altezza " << b << endl;
    cout << "1) area del quadrato di lato " << a << endl;
    cout << "2) area del rettangolo di lati " << a << " e " << b << endl;
    cin >> opzione;

    switch(opzione) {
        case 0:
            Atriangolo = a*b/2;
            cout << Atriangolo;
            break;
        case 1:
            Aquadrato = a*a;
            cout << Aquadrato;
            break;
        case 2:
            Arettangolo = a*b;
            cout << Arettangolo;
            break;
        default:
            cout << "opzione non valida";
    }
    return 0;
}
