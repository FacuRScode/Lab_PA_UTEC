/*
 * Genero.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef GENERO_H_
#define GENERO_H_
#include <iostream>
using namespace std;
#include "Categoria.h"
enum enumG
{
	Accion,
	Aventura,
	Estrategia,
	Deporte
};
class Genero: public Categoria
{
private:
	string descripcion;
	enumG nombreGenero;
public:
	Genero();
	virtual ~Genero();

	string getDescripcion();
	enumG getNombreGenero();

	void setDescripcion(string);
	void setNombreGenero(enumG);
};

#endif /* GENERO_H_ */
