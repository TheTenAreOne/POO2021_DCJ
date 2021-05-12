//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {

    srand(time(NULL));

    int opcionJugador;

    numeroJugador = 1+rand()%14;// numeros de 1 a 13

    cout << "Su numero es: " << numeroJugador << "\n\n";

    //En caso de que no funcione, aplicar el confiable while(true)

    do{

        cout << "Seleccione la opcion que desea realizar: Darse por perdido [1] Continuar [2]: ";

        cin >> opcionJugador;

    }while(opcionJugador != 1 || opcionJugador != 2);

    if(opcionJugador == 1){

        float gonzosResulado = (gonzosApostar / 2);

        return gonzosResulado;

    }

    else{

        numeroCasino == 1+rand()%14;// numeros de 1 a 13

        float gonzosResulado = calcularResultado(gonzosApostar);

        return gonzosResulado;

    }

    return 0;

}


float Mayor13::calcularResultado(float gonzosApostar) {

    if( this->numeroJugador <= this->numeroCasino ){

        return -gonzosApostar;

    }

    if( this->numeroJugador > this->numeroCasino ){
        return gonzosApostar * 2;
    }

    return 0;    

}


Mayor13::~Mayor13() {}
