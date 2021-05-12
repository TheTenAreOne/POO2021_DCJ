#include "masCercano.h"



float masCercano::jugar( float gonzosApostar ){
    srand(time(NULL));
    /*
        El que se acerce más al número gana el doble
        Si es empate, no se gana ni pierde
        El numero objetivo es del 1 al 10
    */
    this->numero = 1+rand()%11; //Numero del 1 al 10
    this->numeroCasino = 1+rand()%11; //Numero del 1 al 10
    this->numeroJugador = 1+rand()%11; //Numero del 1 al 10
    cout << "El numero objetivo es: "<< numero << "\n";
    cout << "Tu numero aleatorio es: "<< numeroJugador <<"\n";
    cout << "Numero casino: "<< numeroCasino <<"\n";
    float gonzosResultado = calcularResultado( gonzosApostar );
    return gonzosResultado;
}

float masCercano::calcularResultado( float gonzosApostar ){
    //El jugador gana
    if( abs( this->numero - this->numeroCasino) > abs( this->numero - this->numeroJugador) ){
        return gonzosApostar*2;
    }else if( abs( this->numero - this->numeroCasino) == abs(this->numero - this->numeroJugador)){
        //Empate
        return 0;
    }
    //El jugador pierde
    return -gonzosApostar;
}

masCercano::~masCercano(){

}
