/*
 * Temporal.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef TEMPORAL_H_
#define TEMPORAL_H_
#include "Suscripcion.h"
#include "Jugador.h"
class Temporal: public Suscripcion
{
private:
	bool activa;
	int peroido;
	float cuotaMensual;
	bool cancelada;
	vector<Jugador*> clientes;
public:
	Temporal();
	virtual ~Temporal();

	bool getActiva();
	int getPeriodo();
	float getCuotaMensual();
	bool getCancelada();

	void setActiva(bool);
	void setPeriodo(int);
	void setCuotaMensual(float);
	void setCancelada(bool);
};

#endif /* TEMPORAL_H_ */
