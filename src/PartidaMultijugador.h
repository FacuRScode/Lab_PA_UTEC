/*
 * PartidaMultijugador.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef PARTIDAMULTIJUGADOR_H_
#define PARTIDAMULTIJUGADOR_H_
#include "DtFecha.h"
#include "Partida.h"
class PartidaMultijugador: public Partida
{
private:
	DtFecha fechaPartida;
	int horaComienzo;
	bool activa;
	int duracionTotal;
	bool enVivo;
public:
	PartidaMultijugador();
	virtual ~PartidaMultijugador();

	DtFecha getFechaPartida();
	int getHoraComienzo();
	bool getActiva();
	int getDuracionTotal();
	bool getEnVivo();

	void setFechaPartida(DtFecha);
	void setHoraComienzo(int);
	void setActiva(bool);
	void setDuracionTotal(int);
	void setEnVivo(bool);
};

#endif /* PARTIDAMULTIJUGADOR_H_ */
