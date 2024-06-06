#include <iostream>
using namespace std;

void tablaMultiplicar(int tabla, int inicio, int fin) {


    cout << "Tabla de multiplicar del " << tabla << " desde " << inicio << " hasta " << fin << ":" <<endl;
    for (int k = inicio; k <= fin; k++) {
        cout << tabla << " x " << k << " = " << tabla * k << endl;
    }
}

int main() {
    int tabla, inicio, fin;
    
    cout << "Ingrese la tabla que desea multiplicar: ";
    cin >> tabla;
    
    cout << "Ingrese el límite inferior: ";
    cin >> inicio;
    
    cout << "Ingrese el límite superior: ";
    cin >> fin;
    
    tablaMultiplicar(tabla, inicio, fin);
    
    return 0;
}
