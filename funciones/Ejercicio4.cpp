//diseñe las funciones que calculan las 4 operaciones aritmeticas
//basicas: suma, resta, producto, division

#include<iostream>

using namespace std;

#include <iostream>


double suma(double  a, double  b) {
    return a + b;
}


double  resta(double  a, double  b) {
    return a - b;
}


double  producto(double  a, double  b) {
    return a * b;
}


double  division(double  a, double  b) {
    
   
    return a / b;
}

int main() {
    double num1, num2;
    
  
    
cout << "Suma: " << suma(89.32, 7) << endl;
cout << "Resta: " << resta(89.32, 7) << endl;
cout << "Producto: " << producto(89.32, 7) << endl;
cout << "División: " << division(89.32, 7) << endl;
    
    return 0;
}
