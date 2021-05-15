//
// Created by lufe0 on 8/05/2021.
//

#ifndef CASINO_Veintiuno_H
#define CASINO_Veintiuno_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>


class Veintiuno:public Juego {

protected:
    int sumaCartasJugador;
    float calcularResultado(float gonzosApostar) override;

public:
    float jugar(float gonzosApostar) override;
    virtual ~Veintiuno();

};


#endif //CASINO_Veintiuno_H
