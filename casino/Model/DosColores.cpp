//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1+rand()%14;// numeros de 1 a 13
    numeroCasino = 1+rand()%14;// numeros de 1 a 13

    colorJugador = rand()%2; // Numero entre 0 y 1
    colorCasino = rand()%2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: "<< numeroJugador <<"\n" << "Tu color: " <<colorJugador << "\n";
    cout << "Numero casino: "<< numeroCasino <<"\n" << "Color casino: " <<colorCasino << "\n";
    float gonzosResulado = calcularResultado(gonzosApostar);
    return gonzosResulado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    int ans;
    if( this->numeroJugador == this->numeroCasino ){
        ans = gonzosApostar + ( gonzosApostar * 0.5 );
        if( this->colorJugador == this->colorCasino ){
            ans = gonzosApostar + (gonzosApostar * 4);
        }
        return ans;
    }
    if( this->colorJugador == this->colorCasino ){
        return 0;
    }
    return -gonzosApostar;
    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    
   // coincide sólo con el valor del dado ganará 0.5 veces lo apostado

   // no gana ni pierde

   // pierde todo lo apostado
}

DosColores::~DosColores() {

}
