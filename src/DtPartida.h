/*
 * DtPartida.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */


#ifndef DTPARTIDA_H_
#define DTPARTIDA_H_
#include <iostream>
using namespace std;
#include "DtFecha.h"

class DtPartida {
private:
	int id;
	DtFecha fecha;
	string nombreVideojuego;
public:
	DtPartida();
	DtPartida(int, DtFecha, string);
	virtual ~DtPartida();

	int getId();
	DtFecha getFecha();
	string getNombreVideojuego();

};

#endif /* DTPARTIDA_H_ */
