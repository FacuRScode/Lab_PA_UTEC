/*
 * Suscripcion.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef SUSCRIPCION_H_
#define SUSCRIPCION_H_
#include "Jugador.h"
#include <vector>
#include "Videojuego.h"

class Suscripcion {
private:
	bool activa;
	int costoVitalicia;
	vector<Jugador*> clientes;
	Videojuego nombreVideojuego;
public:
	Suscripcion();
	virtual ~Suscripcion();

	bool getActiva();
	int getCostoVitalicia();

	void setActiva(bool);
	void setCostoVitalicia(int);
};

#endif /* VITALICIA_H_ */
