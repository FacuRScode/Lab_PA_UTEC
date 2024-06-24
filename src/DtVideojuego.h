/*
 * DtVideojuego.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */
#include <vector>
#include <iostream>
using namespace std;
#include "DtCategoria.h"
#ifndef DTVIDEOJUEGO_H_
#define DTVIDEOJUEGO_H_

class DtVideojuego {

private:
	string nombre;
	string descripcion;
	float puntaje;
	int costoVitalicia;
	int costoAnual;
	int costoMensual;
	int costoTrimestral;
	vector<DtCategoria> categorias;
	string empresa;
	int horasJugadas;
public:
	DtVideojuego();
	DtVideojuego(string, string, float, int ,int, int, int, vector<DtCategoria>, string, int);
	virtual ~DtVideojuego();


	string getNombre();
	string getDescripcion();
	float getPuntaje();
	int getCostoVitalicia();
	int getCostoAnual();
	int getCostoMensual();
	int getCostoTrimestral();
	vector<DtCategoria> getCategorias();
	string getEmpresa();
	int getHorasJugadas();
};

#endif /* DTVIDEOJUEGO_H_ */
