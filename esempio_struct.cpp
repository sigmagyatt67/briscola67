#include <iostream>
#include <vector>
using namespace std;

// Definizione della struct
struct MyData {
    char lettera;
    int numero;
};

int main() {
    // Creazione di un vector di struct
    vector<MyData> dati;

    // Inserimento di alcuni elementi
    dati.push_back({'A', 10});
    dati.push_back({'B', 20});
    dati.push_back({'C', 30});

    // Iterazione e stampa
    for (const auto& elem : dati) {
        cout << "Lettera: " << elem.lettera 
             << ", Numero: " << elem.numero << endl;
    }

    return 0;
}

