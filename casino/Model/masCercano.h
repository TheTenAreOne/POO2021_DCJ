
#ifndef CASINO_MAYOR13_H
#define CASINO_MAYOR13_H


#include "Juego.h"
#include<cstdlib>
#include<ctime>

class masCercano : public Juego {

protected:
    virtual float calcularResultado(float gonzosApostar) override;
public:
    virtual float jugar(float gonzosApostar) override;
    virtual ~masCercano();

};


#endif //CASINO_MAYOR13_H