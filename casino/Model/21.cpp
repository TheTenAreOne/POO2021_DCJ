//
// Created by lufe0 on 8/05/2021.
//

#include "21.h"

float Veintiuno::jugar(float gonzosApostar) {
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int carta1Jugador = 1+rand()%10;// numeros de 1 a 13
    int carta2Jugador = 1+rand()%10;// numeros de 1 a 13
    int carta3Jugador = 1+rand()%10;// numeros de 1 a 13


    cout << "Tus tres cartas son: "<< carta1Jugador <<" || " << carta2Jugador << " || " << carta3Jugador << "\n\n";
    int sumaCartasJugador = carta1Jugador + carta2Jugador + carta3Jugador;
    cout << "La suma de tu puntaje es: " << sumaCartasJugador;
    float gonzosResulado = calcularResultado(gonzosApostar);
    return gonzosResulado;

}

float Veintiuno::calcularResultado(float gonzosApostar) {

    if( this->sumaCartasJugador == 21 ){
        return gonzosApostar * 2;
    }
    if( this->sumaCartasJugador > 21 ){

        return gonzosApostar * 0.5;
    }

    else{

        return -gonzosApostar;

    }
    
    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    
   // coincide sólo con el valor del dado ganará 0.5 veces lo apostado

   // no gana ni pierde

   // pierde todo lo apostado
}

Veintiuno::~Veintiuno() {

}
