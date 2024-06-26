/*
 * Factory.h
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */




#ifndef FACTORY_H_
#define FACTORY_H_
#include "IControladorUsuarios.h"
#include "IControladorVideojuegos.h"
#include "IControladorPartidas.h"
class Factory {
private:
	static Factory* instancia;
	static IControladorUsuarios* instanciaCU;
	static IControladorVideojuegos* instanciaCV;
	static IControladorPartidas* instanciaCP;
	Factory();
	virtual ~Factory();
public:
	static Factory* getInstancia();
	static IControladorUsuarios* getInstanciaCU();
	static IControladorVideojuegos* getInstanciaCV();
	static IControladorPartidas* getInstanciaCP();

};

#endif /* FACTORY_H_ */
