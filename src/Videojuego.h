/*
 * Videojuego.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef VIDEOJUEGO_H_
#define VIDEOJUEGO_H_
#include <iostream>
using namespace std;
#include "Categoria.h"
#include <vector>
#include "Partida.h"
class Videojuego {
private:
	string nombreVideojuego;
	string descripcion;
	float promedio;
	vector<Categoria*> categorias;
	vector<Partida*> partidas;
public:
	Videojuego();
	virtual ~Videojuego();

	string getNombreVideojuego();
	string getDescripcion();
	float getPromedio();

	void setNombreVideojuego(string);
	void setDescripcion(string);
	void setPromedio(float);
};

#endif /* VIDEOJUEGO_H_ */
