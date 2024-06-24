/*
 * IControladorPartidas.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */
#include "DtPartidaMultijugador.h"
#include "DtPartida.h"
#include "DtPartidaIndividual.h"
#include "DtComentario.h"

#include <iostream>
using namespace std;
#include <vector>

#ifndef ICONTROLADORPARTIDAS_H_
#define ICONTROLADORPARTIDAS_H_

class IControladorPartidas {
public:
		virtual vector<DtPartidaIndividual> historialPartidaIndividualFinalizada() = 0;
		virtual void seleccionarIndividual(int) = 0;
		virtual void enVivo(bool) = 0;
		virtual void seleccionarJugadores(string) = 0;
		virtual void aceptarIniciarPartida() = 0;
		virtual void cancelarIniciarPartida() = 0;
		virtual vector<DtPartidaMultijugador> listaDatosPartida() = 0;
		virtual void abandonarPartidaMultijugador(int) = 0;
		virtual vector<DtPartida> listaParitdas() = 0;
		virtual void confirmarFinalizarParitdaIndividual(int) = 0;
		virtual void cancelarFinalizarPartidaIndividual() = 0;
		virtual void confirmarFinalizarMultijugador(int) = 0;
		virtual void cancelarFinalizarMultijugador() = 0;
		virtual vector<DtPartidaMultijugador> obtenerPartidasMultiljugadorSinFinalizarEnVivo() = 0;
		virtual void seleccionarPartidaMultijugador(int) = 0;
		virtual vector<DtComentario> obtenerComentarios() = 0;
		virtual void seleccionaComentario(int) = 0;
		virtual void cancelarEnvioComentario() = 0;
		virtual void aceptarEnvioComentario() = 0;
		virtual void realizarComentario(string) = 0;
};

#endif /* ICONTROLADORPARTIDAS_H_ */
