/*
 * ControladorVideojuegos.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */
#include "IControladorVideojuegos.h"
#include "DtVideojuego.h"
#include "DtCategoria.h"

#include <vector>
#include <iostream>
using namespace std;

#ifndef CONTROLADORVIDEOJUEGOS_H_
#define CONTROLADORVIDEOJUEGOS_H_

class ControladorVideojuegos: public IControladorVideojuegos {
private:
	//vector<Categoria*> categorias;
	//vector<Videojuego*> videojuegos;
public:
	ControladorVideojuegos();
	virtual ~ControladorVideojuegos();

	void nuevoVideojuegos(DtVideojuego);
	void seleccionarGeneros(DtCategoria);
	void seleccionarPlataforma(DtCategoria);
	DtVideojuego obtenerVideojeugoIngresado();
	void confirmarAltaVideojuego();
	void cancelarAltaVideojuego();
	vector<DtVideojuego> listaVideojuegos();
	void asignarPuntaje(string, int);
	vector<string> nombresVideojuegoConSuscripcionActiva();
	void seleccionarVideojeugo(int);
	vector<string> listaNombresJuegos();
	DtVideojuego solicitarInfomracionDesarrolladorVideojuego(string);
	DtVideojuego solicitarInformacionVideojuego(string);
	vector<string> listaVideojuegosSinParitdaSinFinalizar();
	void eliminarVideojuego(string);
	void aceptarEliminacionVideojuego();
	void cancelarEliminacionVideojuego();
	vector<DtCategoria> listaCategorias();
	vector<DtCategoria> obtenerPlataformas();
	vector<DtCategoria> obtenerGeneros();
	void cancelarAltaCategoria();
	void darAltaCategoria();
	void agregarCategoria(DtCategoria);
	void suscribirVideojuego(string);
	void cancelarProcesoSuscripcion();
	void darAltaSuscripcion();
	void comprarSuscripcion(enumSus, enumPago);
};

#endif /* CONTROLADORVIDEOJUEGOS_H_ */
