/*
 * ControladorVideojuegos.cpp
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */

#include "ControladorVideojuegos.h"

ControladorVideojuegos::ControladorVideojuegos() {
	// TODO Auto-generated constructor stub

}

ControladorVideojuegos::~ControladorVideojuegos() {
	// TODO Auto-generated destructor stub
}

void ControladorVideojuegos::nuevoVideojuegos(DtVideojuego){}
void ControladorVideojuegos::seleccionarGeneros(DtCategoria){}
void ControladorVideojuegos::seleccionarPlataforma(DtCategoria){}
DtVideojuego ControladorVideojuegos::obtenerVideojeugoIngresado(){}
void ControladorVideojuegos::confirmarAltaVideojuego(){}
void ControladorVideojuegos::cancelarAltaVideojuego(){}
vector<DtVideojuego> ControladorVideojuegos::listaVideojuegos(){}
void ControladorVideojuegos::asignarPuntaje(string, int){}
vector<string> ControladorVideojuegos::nombresVideojuegoConSuscripcionActiva(){}
void ControladorVideojuegos::seleccionarVideojeugo(int){}
vector<string> ControladorVideojuegos::listaNombresJuegos(){}
DtVideojuego ControladorVideojuegos::solicitarInfomracionDesarrolladorVideojuego(string){}
DtVideojuego ControladorVideojuegos::solicitarInformacionVideojuego(string){}
vector<string> ControladorVideojuegos::listaVideojuegosSinParitdaSinFinalizar(){}
void ControladorVideojuegos::eliminarVideojuego(string){}
void ControladorVideojuegos::aceptarEliminacionVideojuego(){}
void ControladorVideojuegos::cancelarEliminacionVideojuego(){}
vector<DtCategoria> ControladorVideojuegos::listaCategorias(){}
vector<DtCategoria> ControladorVideojuegos::obtenerPlataformas(){}
vector<DtCategoria> ControladorVideojuegos::obtenerGeneros(){}
void ControladorVideojuegos::cancelarAltaCategoria(){}
void ControladorVideojuegos::darAltaCategoria(){}
void ControladorVideojuegos::agregarCategoria(DtCategoria){}
void ControladorVideojuegos::suscribirVideojuego(string){}
void ControladorVideojuegos::cancelarProcesoSuscripcion(){}
void ControladorVideojuegos::darAltaSuscripcion(){}
void ControladorVideojuegos::comprarSuscripcion(enumSus, enumPago){}
