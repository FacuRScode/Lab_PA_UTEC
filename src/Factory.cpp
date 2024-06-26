/*
 * Factory.cpp
 *
 *  Created on: 23 jun 2024
 *      Author: Cristian
 */

#include "Factory.h"
#include "ControladorPartidas.h"
#include "ControladorUsuarios.h"
#include "ControladorVideojuegos.h"

Factory::Factory() {

}

Factory::~Factory() {
	// TODO Auto-generated destructor stub
}
Factory* Factory::instancia = nullptr;
IControladorUsuarios* Factory::instanciaCU = nullptr;
IControladorVideojuegos* Factory::instanciaCV = nullptr;
IControladorPartidas* Factory::instanciaCP = nullptr;

Factory* Factory::getInstancia(){
	if(instancia == nullptr)
	{
		instancia = new Factory();
	}
	return instancia;
}

IControladorUsuarios* Factory::getInstanciaCU(){
	if(instanciaCU == nullptr)
	{
		instanciaCU = new ControladorUsuarios();
	}
	return instanciaCU;
}

IControladorVideojuegos* Factory::getInstanciaCV(){
	if(instanciaCV == nullptr)
	{
		instanciaCV = new ControladorVideojuegos();
	}
	return instanciaCV;
}

IControladorPartidas* Factory::getInstanciaCP(){
	if(instanciaCP == nullptr)
	{
		instanciaCP = new ControladorPartidas();
	}
	return instanciaCP;
}
