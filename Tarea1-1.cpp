#include <iostream>
using namespace std;
const float IVA = 1.19;

int main( ){
    int precio;
    cout << "Ingrese precio" << endl;
    cin >> precio;
    cout << "Precio final: " << precio * IVA << endl;


    return 0; 
}