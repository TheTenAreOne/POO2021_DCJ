#include "Cuadrado.h"

Cuadrado::Cuadrado(){}

Cuadrado::Cuadrado(float lados){
    this->lados = lados;
    calcularArea();
    calcularPerimetro();
}

void Cuadrado::calcularArea(){
    this->area = (this->lados * this->lados);
}

void Cuadrado::calcularPerimetro(){
    this->perimetro = (this->lados * 4);
}

void Cuadrado::mostrarFigura(){
    cout << "Lado:" << this->lados << endl; 
    cout << "Area:" << this->area << endl;
    cout << "Perimetro:" << this->perimetro << endl; 
}

float Cuadrado::getLados(){
    return lados;
}
void Cuadrado::setLados(float lados){
    this->lados = lados;
}