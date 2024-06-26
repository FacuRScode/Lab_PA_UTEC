/*
 * IControladorVideojuegos.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */
#include "DtVideojuego.h"
#include "DtCategoria.h"

#include <iostream>
using namespace std;
#include <vector>

#ifndef ICONTROLADORVIDEOJUEGOS_H_
#define ICONTROLADORVIDEOJUEGOS_H_

enum enumSus
{
	Vitalicia,
	Anual,
	Mensual,
	Trimestral
};

enum enumPago
{
	PayPal,
	Tarjeta
};

class IControladorVideojuegos {
public:
	virtual void nuevoVideojuegos(DtVideojuego) = 0;
	virtual void seleccionarGeneros(DtCategoria) = 0;
	virtual void seleccionarPlataforma(DtCategoria) = 0;
	virtual DtVideojuego obtenerVideojeugoIngresado() = 0;
	virtual void confirmarAltaVideojuego() = 0;
	virtual void cancelarAltaVideojuego() = 0;
	virtual vector<DtVideojuego> listaVideojuegos() = 0;
	virtual void asignarPuntaje(string, int) = 0;
	virtual vector<string> nombresVideojuegoConSuscripcionActiva() = 0;
	virtual void seleccionarVideojeugo(int) = 0;
	virtual vector<string> listaNombresJuegos() = 0;
	virtual DtVideojuego solicitarInfomracionDesarrolladorVideojuego(string) = 0;
	virtual DtVideojuego solicitarInformacionVideojuego(string) = 0;
	virtual vector<string> listaVideojuegosSinParitdaSinFinalizar() = 0;
	virtual void eliminarVideojuego(string) = 0;
	virtual void aceptarEliminacionVideojuego() = 0;
	virtual void cancelarEliminacionVideojuego() = 0;
	virtual vector<DtCategoria> listaCategorias() = 0;
	virtual vector<DtCategoria> obtenerPlataformas() = 0;
	virtual vector<DtCategoria> obtenerGeneros() = 0;
	virtual void cancelarAltaCategoria() = 0;
	virtual void darAltaCategoria() = 0;
	virtual void agregarCategoria(DtCategoria) = 0;
	virtual void suscribirVideojuego(string) = 0;
	virtual void cancelarProcesoSuscripcion() = 0;
	virtual void darAltaSuscripcion() = 0;
	virtual void comprarSuscripcion(enumSus, enumPago) = 0;
};

#endif /* ICONTROLADORVIDEOJUEGOS_H_ */
