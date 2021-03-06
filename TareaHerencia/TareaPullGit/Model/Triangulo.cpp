#include "triangulo.h"

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo() {}

Triangulo::Triangulo(float base, float altura)
{

    this->base = base;
    this->altura = altura;

    calcularArea();
    calcularPerimetro();

}

//METODOS TRIANGULO

void Triangulo::calcularArea()
{
    float area;
    area = (base * altura) / 2;
    std::cout << "El area del Triangulo es: " << area << std::endl;
}

void Triangulo::calcularPerimetro()
{
    float perimetro, temp;
    temp = base / 2;
    perimetro = 2 * ((sqrt((temp * temp)) + (altura * altura))) + base;
    std::cout << "El perimetro del Triangulo es: " << perimetro << std::endl;
}

void Triangulo::mostrarFigura(){

    cout << "Base: " << this->base << endl;
    cout << "Altura: " << this->altura << endl;
    cout << "Area: " << this->area << endl;
    cout << "Perimetro: " << this->perimetro << endl;
    
}
