/*
 * Puntaje.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef PUNTAJE_H_
#define PUNTAJE_H_

#include "Jugador.h"
#include "Videojuego.h"
class Puntaje {
private:
    int puntos;
    Jugador* nombreJugador;
    Videojuego nombreVideojuego;
public:
    Puntaje();
    virtual ~Puntaje();
};

#endif /* PUNTAJE_H_ */
