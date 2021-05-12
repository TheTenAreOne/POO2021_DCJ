
#ifndef MAS_CERCANO_H
#define MAS_CERCANO_H


#include "Juego.h"
#include<cstdlib>
#include<ctime>

class masCercano : public Juego {

protected:
    virtual float calcularResultado(float gonzosApostar) override;
    int numero;
public:
    virtual float jugar(float gonzosApostar) override;
    virtual ~masCercano();

};


#endif //CASINO_MAYOR13_H