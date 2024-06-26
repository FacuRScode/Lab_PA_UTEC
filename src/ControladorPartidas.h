/*
 * ControladorPartidas.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */
#include "IControladorPartidas.h"
#include "DtPartidaMultijugador.h"
#include "DtPartida.h"
#include "DtPartidaIndividual.h"
#include "DtComentario.h"

#include <vector>
#include <iostream>
using namespace std;

#ifndef CONTROLADORPARTIDAS_H_
#define CONTROLADORPARTIDAS_H_

class ControladorPartidas: public IControladorPartidas {
private:

public:
	ControladorPartidas();
	virtual ~ControladorPartidas();

	vector<DtPartidaIndividual> historialPartidaIndividualFinalizada();
	void seleccionarIndividual(int);
	void enVivo(bool);
	void seleccionarJugadores(string);
	void aceptarIniciarPartida();
	void cancelarIniciarPartida();
	vector<DtPartidaMultijugador> listaDatosPartida();
	void abandonarPartidaMultijugador(int);
	vector<DtPartida> listaParitdas();
	void confirmarFinalizarParitdaIndividual(int);
	void cancelarFinalizarPartidaIndividual();
	void confirmarFinalizarMultijugador(int);
	void cancelarFinalizarMultijugador();
	vector<DtPartidaMultijugador> obtenerPartidasMultiljugadorSinFinalizarEnVivo();
	void seleccionarPartidaMultijugador(int);
	vector<DtComentario> obtenerComentarios();
	void seleccionaComentario(int);
	void cancelarEnvioComentario();
	void aceptarEnvioComentario();
	void realizarComentario(string);
};

#endif /* CONTROLADORPARTIDAS_H_ */
