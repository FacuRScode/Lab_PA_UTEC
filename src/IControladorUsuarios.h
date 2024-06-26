/*
 * IControladorUsuarios.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */
#include "DtUsuario.h"
#include "DtJugador.h"
#include "DtDesarrollador.h"

#include <iostream>
using namespace std;
#include <vector>

#ifndef ICONTROLADORUSUARIOS_H_
#define ICONTROLADORUSUARIOS_H_

enum enumRol
{
	Jugador,
	Desarrollador
};

class IControladorUsuarios {
public:
	virtual void registro(DtUsuario) = 0;
	virtual void eleccion(enumRol) = 0;
	virtual void registroJugador(DtJugador) = 0;
	virtual bool verificarJugador(string) = 0;
	virtual void darAltaUsuario() = 0;
	virtual void cancelarAltaUsuario() = 0;
	virtual void iniciarSesion(string, string) = 0;
	virtual bool verificarDatos(string, string) = 0;
	virtual void darAcceso() = 0;
	//virtual void registroDesarrollador(DtDesarrollador) = 0;
	virtual vector<DtJugador> listaJugadores() = 0;
	virtual void seguirJugador(string) = 0;
};

#endif /* ICONTROLADORUSUARIOS_H_ */
