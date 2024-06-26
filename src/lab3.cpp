//============================================================================
// Name        : lab3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "IControladorUsuarios.h"
#include "IControladorVideojuegos.h"
#include "IControladorPartidas.h"
#include "Factory.h"

#include <iostream>
using namespace std;

int main() {

    Factory* fabrica = Factory::getInstancia();

    IControladorUsuarios* ICU = fabrica->getInstanciaCU();
    ICU->seguirJugador("Jugador1");

    IControladorVideojuegos* ICV = fabrica->getInstanciaCV();
    ICV->eliminarVideojuego("Juego1");

    IControladorPartidas* ICP = fabrica->getInstanciaCP();
    ICP->realizarComentario("Comentario");
}
