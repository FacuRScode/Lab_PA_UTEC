/*
 * Plataforma.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef PLATAFORMA_H_
#define PLATAFORMA_H_
#include <iostream>
using namespace std;
#include "Categoria.h"
enum enumP
{
	PC,
	Switch,
	PS4,
	Xbox_One,
	Xbox_X,
	PS5
};

class Plataforma: public Categoria
{
private:
	string descripcion;
	enumP nombrePlatafomra;
public:
	Plataforma();
	virtual ~Plataforma();

	string getDescripcion();
	enumP getNombrePlataforma();

	void setDescripcion(string);
	void setNombrePlataforma(enumP);
};
#endif /* PLATAFORMA_H_ */
