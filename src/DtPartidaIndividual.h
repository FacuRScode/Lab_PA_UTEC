/*
 * DtPartidaIndividual.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */
#include <iostream>
using namespace std;
#include "DtFecha.h"

#ifndef DTPARTIDAINDIVIDUAL_H_
#define DTPARTIDAINDIVIDUAL_H_

class DtPartidaIndividual {
private:
	int id;
	DtFecha fecha;
	string nombreVideojuego;
	int duracion;
	bool esConinuacion;
public:
	DtPartidaIndividual();
	DtPartidaIndividual(int, DtFecha, string, int, bool);
	virtual ~DtPartidaIndividual();

	int getId();
	DtFecha getFecha();
	string getNombreVideojuego();
	int getDuracion();
	bool getEsContinuacion();
};

#endif /* DTPARTIDAINDIVIDUAL_H_ */
