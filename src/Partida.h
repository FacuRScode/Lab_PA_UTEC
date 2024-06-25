/*
 * Partida.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef PARTIDA_H_
#define PARTIDA_H_
#include "DtFecha.h"
class Partida {
private:
	DtFecha fechaPartida;
	int horaComienzo;
	bool activa;
public:
	Partida();
	virtual ~Partida();

	DtFecha getFechaPartida();
	int getHoraComienzo();
	bool getActiva();

	void setFechaPartida(DtFecha);
	void setHoraComienzo(int);
	void setActiva(bool);
};

#endif /* PARTIDA_H_ */
