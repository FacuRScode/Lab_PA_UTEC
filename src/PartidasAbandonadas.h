/*
 * PartidasAbandonadas.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef PARTIDASABANDONADAS_H_
#define PARTIDASABANDONADAS_H_
#include "DtFecha.h"
#include "PartidaMultijugador.h"
class PartidasAbandonadas {
private:
	DtFecha fechaAbandono;
	PartidaMultijugador Pmultijugador;
public:
	PartidasAbandonadas();
	virtual ~PartidasAbandonadas();
};

#endif /* PARTIDASABANDONADAS_H_ */
