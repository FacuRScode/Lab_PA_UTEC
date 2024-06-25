/*
 * Categoria.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef CATEGORIA_H_
#define CATEGORIA_H_

#include <iostream>
using namespace std;

class Categoria {
private:
	string descripcion;
public:
	Categoria();
	virtual ~Categoria();

	string getDescripcion();

	void setDescripcion(string);
};

#endif /* CATEGORIA_H_ */
