/*
 * DtPartidaMultijugador.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */

#ifndef DTPARTIDAMULTIJUGADOR_H_
#define DTPARTIDAMULTIJUGADOR_H_
#include <iostream>
using namespace std;
#include "DtFecha.h"
#include <vector>
#include "DtPartida.h"
class DtPartidaMultijugador: public DtPartida {
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
