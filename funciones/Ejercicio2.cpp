#include<iostream>
using namespace std;


//imprima una tbla d emultiplicar

void TablaMultiplicar(int tabla)
{

    cout<<endl<<"tabla de multiplicar del "<< tabla;
    for(int  k=1; k<=12; k++ ){

        cout<<endl<<tabla << " x " << k << "=" << tabla*k;
    }
}
//diseña la funcion y imprima una tabla d emultiplicar 
//la funcion recibe como parametros 3 enteros el primero es la tabla
// el segundo es el limite inferior 
// el tercero es el limite superior

void TablaLimites(int tabla, int inicio, int fin)
{
    
    cout<<endl<<"tabla de multiplicar del "<< tabla;
    for(int  k=1; k<=12; k++ ){

        cout<<endl<<tabla << " x " << k << "=" << tabla*k;
    }
}



 int val;
 int main()
 {

    cout<<endl<<"Ingresa el numero de la tabla que deseas saber: ";

    cin>>val;
    cout<<endl<<"Funcion que calcula una tabla de multplicar";
    TablaMultiplicar(val);
    
    return 0;
 }