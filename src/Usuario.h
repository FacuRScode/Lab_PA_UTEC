/*
 * Usuario.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef USUARIO_H_
#define USUARIO_H_
#include <iostream>
using namespace std;
class Usuario {
private:
	string email;
	string contrasenia;
public:
	Usuario();
	virtual ~Usuario();

	string getEmail();
	string getContrasenia();

	void setEmail(string);
	void setConstrasenia(string);
};

#endif /* USUARIO_H_ */
