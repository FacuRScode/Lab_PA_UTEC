/*
 * Vitalicia.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef VITALICIA_H_
#define VITALICIA_H_
#include "Suscripcion.h"
#include "Jugador.h"
#include <vector>

class Vitalicia: public Suscripcion
{
private:
	bool activa;
	int costoVitalicia;
	vector<Jugador*> clientes;
public:
	Vitalicia();
	virtual ~Vitalicia();

	bool getActiva();
	int getCostoVitalicia();

	void setActiva(bool);
	void setCostoVitalicia(int);
};

#endif /* VITALICIA_H_ */
