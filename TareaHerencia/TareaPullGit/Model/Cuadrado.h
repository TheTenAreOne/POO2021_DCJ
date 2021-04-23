#ifndef CUADRADO_H
// Guardas
#define CUADRADO_H

//CLASE CUADRADO
#include <iostream>
#include <cstdlib>
#include "FiguraGeometrica.h"
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Cuadrado : public FiguraGeometrica
{
private:
    float lados;
    float perimetro;
    float area;

public:
    Cuadrado(); //no olvidar
    Cuadrado(float lados);  
    virtual void calcularArea() override;
    virtual void calcularPerimetro() override;
    virtual void mostrarFigura() override;
    float getLados();
    void setLados(float lados);
};

#endif /* !CUADRADO_H */