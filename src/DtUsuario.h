/*
 * DtUsuario.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */


#ifndef DTUSUARIO_H_
#define DTUSUARIO_H_
#include <iostream>
using namespace std;
class DtUsuario {
private:
	string email;
	string contrasenia;
public:
	DtUsuario();
	DtUsuario(string, string);
	virtual ~DtUsuario();

	string getEmail();
	string getContrasenia();
};

#endif /* DTUSUARIO_H_ */
