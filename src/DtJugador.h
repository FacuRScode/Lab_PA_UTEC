/*
 * DtJugador.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */


#ifndef DTDESARROLLADOR_H_
#define DTDESARROLLADOR_H_

#include "DtUsuario.h"

#include <iostream>
using namespace std;

class DtJugador : public DtUsuario{
private:
	string email;
	string contrasenia;
	string nickname;
	string descripcion;
public:
	DtJugador();
	DtJugador(string, string, string);
	virtual ~DtJugador();

	string getEmail();
	string getContrasenia();
	string getNickname();
	string getDescripcion();
};

#endif /* DTDESARROLLADOR_H_ */
