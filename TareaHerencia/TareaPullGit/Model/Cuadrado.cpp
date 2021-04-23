#include "Cuadrado.h"

Cuadrado::Cuadrado(){}

Cuadrado::Cuadrado(float lados){
    this->lados = lados;
}

void Cuadrado::calcularArea(){
    this->area = (this->lados * this->lados);
}

void Cuadrado::calcularPerimetro(){
    this->perimetro = (this->lados * 4);
}

void Cuadrado::mostrarFigura(){
    calcularArea();
    calcularPerimetro();
    cout << "Cuadrado: L:" << this->lados << "A:" << this->area << "P:" << this->perimetro << endl; 
}

float Cuadrado::getLados(){
    return lados;
}
void Cuadrado::setLados(float lados){
    this->lados = lados;
}