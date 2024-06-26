/*
 * PartidaIndividual.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef PARTIDAINDIVIDUAL_H_
#define PARTIDAINDIVIDUAL_H_
#include "DtFecha.h"
#include "Partida.h"
class PartidaIndividual: public Partida
{
private:
	DtFecha fechaPartida;
	int horaComienzo;
	bool activa;
	bool continuacion;
public:
	PartidaIndividual();
	virtual ~PartidaIndividual();

	DtFecha getFechaPartida();
	int getHoraComienzo();
	bool getActiva();
	bool getContinuacion();

	void setFechaPartida(DtFecha);
	void setHoraComienzo(int);
	void setActiva(bool);
	void setContinuacion(bool);
};

#endif /* PARTIDAINDIVIDUAL_H_ */
