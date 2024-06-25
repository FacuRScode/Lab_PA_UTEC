/*
 * Desarrollador.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef DESARROLLADOR_H_
#define DESARROLLADOR_H_

#include <iostream>
using namespace std;
#include "Usuario.h"
#include <vector>
#include "Categoria.h"
#include "Videojuego.h"

class Desarrollador: public Usuario
{
private:
	string email;
	string contrasenia;
	string nombreEmpresa;
	vector<Categoria*> categoriasCreadas;
	vector<Videojuego*> videojuegosCreados;
public:
	Desarrollador();
	virtual ~Desarrollador();

	string getEmail();
	string getContrasenia();
	string getNombreEmpresa();

	void setEmail(string);
	void setConstrasenia(string);
	void setNombreEmpresa(string);
};

#endif /* DESARROLLADOR_H_ */
