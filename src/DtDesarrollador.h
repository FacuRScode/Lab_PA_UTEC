/*
 * DtDesarrollador.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */

#include "DtUsuario.h"
#ifndef DTDESARROLLADOR_H_
#define DTDESARROLLADOR_H_

class DtDesarrollador : public DtUsuario{
private:
	string email;
	string contrasenia;
	string empresa;
public:
	DtDesarrollador();
	DtDesarrollador(string, string, string);
	virtual ~DtDesarrollador();

	string getEmail();
	string getContrasenia();
	string getEmrpesa();
};

#endif /* DTDESARROLLADOR_H_ */
