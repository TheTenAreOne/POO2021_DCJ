#include <iostream>
#include <cmath>

const int MAX_ARRAY = 10;

class Circulo{
    private:
        float radio;
        float PI;
    public:
        Circulo();
        Circulo( float radio );
        Circulo( float radio, float PI );
        float calcularArea();
        float calcularPerimetro();
        float getRadio();
};

//Constructor por defecto
Circulo::Circulo(){
    radio = 1;
    this->PI = 3.14159265359;
    std::cout << "defecto" << std::endl;
}

//Constructor 1 parametro
Circulo::Circulo( float radio ){
    this->radio = radio; 
    this->PI = 3.14159265359; 
}

//Constructor 2 parametros
Circulo::Circulo( float radio, float PI ){
    this->radio = radio;
    this->PI = PI;
}

//Calcular area
float Circulo::calcularArea(){
    return PI * ( radio * radio );
}

//Calcular perimetro
float Circulo::calcularPerimetro(){
    return 2 * PI * radio;
}

//radio getter
float Circulo::getRadio(){
    return this->radio;
}

class Rectangulo{
    private:
        float largo;
        float ancho;
    public:
        Rectangulo();
        Rectangulo( float largo, float ancho );
        float calcularArea();
};

Rectangulo::Rectangulo(){
    largo = 2;
    largo = 2;
}

Rectangulo::Rectangulo( float largo, float ancho ){
    this->largo = largo;
    this->ancho = ancho;
}

float Rectangulo::calcularArea(){
    return largo * ancho;
}

int menu(){
    int opc;
    std::cout << "1. Circulo / 2.Rectangulo / 3.Triangulo / 0.Salir" << std::endl;
    std::cin >> opc;
    return opc;
}

class Triangulo{
    private:
        float ladoA;
        float ladoB;
        float ladoC;

    public:
        Triangulo();
        Triangulo( float ladoA, float ladoB, float ladoC );
        float calcularArea();
};

Triangulo::Triangulo(){
    this->ladoA = 1;
    this->ladoB = 1;
    this->ladoC = 1;
}

Triangulo::Triangulo( float ladoA, float ladoB, float ladoC ){
    this->ladoA = ladoA;
    this->ladoB = ladoB;
    this->ladoC = ladoC;
}

float Triangulo::calcularArea(){
    float area;
    float altura = sqrt( ladoA ) + sqrt( ladoB );
    
    return area;
}

void printArrayCirculitos( Circulo circulitos[], int circulitosCount ){
    int i;
    for( i = 0; i < circulitosCount; i++ ){
        std::cout << i << " " << circulitos[ i ].getRadio();
    }
    return;
}

Circulo crearCirculo(){
    float radio;
    std::cout << "radio: " << std::endl;
    std::cin >> radio;
    Circulo ruedita( radio );
    return ruedita;
}

Rectangulo crearRectangulo(){
    float largo, ancho;
    std::cout << "Largo: " << std::endl;
    std::cin >> largo;
    std::cout << "Ancho: " << std::endl;
    std::cin >> ancho;
    Rectangulo cajita( largo, ancho );
    return cajita;
}

Triangulo crearTriangulo(){
    float ladoA, ladoB, ladoC;
    std::cout << "Lado A: " << std::endl;
    std::cin >> ladoA;
    std::cout << "Lado B: " << std::endl;
    std::cin >> ladoB;
    std::cout << "Lado C: " << std::endl;
    std::cin >> ladoC;
    Triangulo piramidita( ladoA, ladoB, ladoC );
    return piramidita;
}

void mostrarFiguras( Circulo circulitos[], Rectangulo cajitas[], Triangulo triangulitos[], int circulitosCount, int cajitasCount, int triangulitosCount ){
    int i;
    for( i = 0; i < circulitosCount; i++ ){
        std::cout << i << " " << circulitos[ i ].calcularArea();
    }
    for( i = 0; i < cajitasCount; i++ ){
        std::cout << i << " " << circulitos[ i ].calcularArea();
    }
    for( i = 0; i < triangulitosCount; i++ ){
        std::cout << i << " " << circulitos[ i ].calcularArea();
    }
    return;
}

int main(){
    int opc;
    int circulitosCount = 0;
    int cajitasCount = 0;
    int triangulitosCount = 0;

    Circulo ruedita1;
    Circulo ruedita2( 2 );
    Circulo ruedita3( 2, 3.14 );

    Rectangulo cajita1( 3, 4 );

    std::cout << "A: " << ruedita1.calcularArea() << std::endl;
    std::cout << "A: " << ruedita2.calcularArea() << std::endl;
    std::cout << "A: " << ruedita3.calcularArea() << std::endl;
    std::cout << "r: " << ruedita3.getRadio() << std::endl;

    Circulo circulitos[ MAX_ARRAY ];
    Rectangulo cajitas[ MAX_ARRAY ];
    Triangulo   triangulitos[ MAX_ARRAY ];

    std::cout << "A: " << cajita1.calcularArea() << std::endl;


    do{
        opc = menu();
        switch( opc ){
            case 1:
                circulitos[ circulitosCount++ ] = crearCirculo();
                break;
            case 2:
                cajitas[ cajitasCount++ ] = crearRectangulo();
                break;
            case 3:
                triangulitos[ triangulitosCount++ ] = crearTriangulo();
                break;
            case 4:
                mostrarFiguras( circulitos, cajitas, triangulitos, circulitosCount, cajitasCount, triangulitosCount );
                break;
        }
    }while( opc != 0 );

    printArrayCirculitos( circulitos, circulitosCount );

    return 0;
}