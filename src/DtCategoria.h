/*
 * DtCategoria.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */
#include <iostream>
using namespace std;

#ifndef DTCATEGORIA_H_
#define DTCATEGORIA_H_

class DtCategoria {
	enum enumTipo
	{
		Plataforma,
		Genero
	};
private:
	string nombre;
	string descripcion;
	enumTipo tipo;
public:
	DtCategoria();
	DtCategoria(string, string, enumTipo);
	virtual ~DtCategoria();

	string getNombre();
	string getDescripcion();
	enumTipo getTipo();

};

#endif /* DTCATEGORIA_H_ */
