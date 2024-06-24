/*
 * DtPartidaMultijugador.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */
#include <iostream>
using namespace std;
#include "DtFecha.h"
#include <vector>

#ifndef DTPARTIDAMULTIJUGADOR_H_
#define DTPARTIDAMULTIJUGADOR_H_

class DtPartidaMultijugador {
private:
	int id;
	DtFecha fecha;
	string nombreVideojuego;
	bool enVivo;
	string NombreCreador;
	vector<string> nombreJugadores;
public:
	DtPartidaMultijugador();
	DtPartidaMultijugador(int, DtFecha, string, bool, string, vector<string>);
	virtual ~DtPartidaMultijugador();

	int getId();
	DtFecha getFecha();
	string getNombreVideojuego();
	bool getEnVivo();
	string getNombreCreador();
	vector<string> getNombreJugadores();

};

#endif /* DTPARTIDAMULTIJUGADOR_H_ */
