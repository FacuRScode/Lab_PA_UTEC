/*
 * ControladorUsuarios.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */


#ifndef CONTROLADORUSUARIOS_H_
#define CONTROLADORUSUARIOS_H_

#include "IControladorUsuarios.h"
#include "DtUsuario.h"
#include "DtJugador.h"
#include "DtDesarrollador.h"


#include <vector>
#include <iostream>
using namespace std;
#include "Usuario.h"

class ControladorUsuarios : public IControladorUsuarios {
private:
	vector<Usuario*> usuarios;
	Usuario* usuarioActual;
public:
	ControladorUsuarios();
	virtual ~ControladorUsuarios();

	void registro(DtUsuario);
	void eleccion(enumRol);
	void registroJugador(DtJugador);
	bool verificarJugador(string);
	void darAltaUsuario();
	void cancelarAltaUsuario();
	void iniciarSesion(string, string);
	bool verificarDatos(string, string);
	void darAcceso();
	//void registroDesarrollador(DtDesarrollador);
	vector<DtJugador> listaJugadores();
	void seguirJugador(string);
};

#endif /* CONTROLADORUSUARIOS_H_ */
