#include<iostream>
using namespace std;


/// @brief Calcula el cuadrado de un numero
/// @param num 
/// @return int


int CuadradoNum(int num)
{
    int res;
    res = num*num;
    return res;
}

int val;
int x;
int main()

{
    cout<<endl<<"Ingresa el valor que uqieras al cuadrado";

    cin>>val;

    cout<<endl<<"Calculo del cuadardo de un numero";



    cout<<endl<<"El cuadrado del numero que ingresaste  es:"<< CuadradoNum(val);

    x = CuadradoNum(CuadradoNum(3));
    cout<<endl<<"Resultado de cuadrado"<< x;
    

    return 0;

}