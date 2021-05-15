//
// Created by lufe0 on 7/05/2021.
//

#include "Casino.h"

// Constructor que inicializa las ganancias y perdidas en cero
Casino::Casino() {

    cout <<"Inicialice casino";

    jugadoresMap.clear(); // Se limpian los jugadores del casino

}


void Casino::agregarJuego(Juego * juego) {

    juegosDisponibles.push_back(juego);

}



void Casino::agregarJugador(Jugador *pJugador) {
    this->jugadoresMap.insert({ pJugador->getId() , pJugador });
    // Se agrega el jugador al mapa de jugadores del casino
}

bool Casino::verExisteJugador(long id) {

    if(jugadoresMap[id] == NULL){
        return false;
    } 

    return true;

}

Jugador *Casino::consultarJugador(long id) {

    return jugadoresMap[id]; // Retora el apuntador a jugador.

}

double Casino::convertirPesosAGonzos(double dinero) {

    // Cada 10 mil pesos equivalen a 100 Gonzos
    cout << "Por implementar \n";
    return 0;

}

vector<Juego *> &Casino::consultarJuegos() {

    return juegosDisponibles;

}




// PARA DANIEL // // PARA DANIEL // // PARA DANIEL // // PARA DANIEL // // PARA DANIEL //

void Casino::retirarJugador(long id) {
    // Pendiente por implementar
    // Investigue como remover el jugador del mapa

    this->jugadoresMap.erase( id );

    cout << "Juegaor eliminao :D \n";
}


double Casino::convertirGonzosPesos(float gonzos) {
    // Pendiente por implementar
    return (gonzos * 10000);
}

Casino::~Casino() {

}