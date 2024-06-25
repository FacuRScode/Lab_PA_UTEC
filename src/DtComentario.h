/*
 * DtComentario.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */


#ifndef DTCOMENTARIO_H_
#define DTCOMENTARIO_H_

#include <iostream>
using namespace std;
#include "DtFecha.h"

class DtComentario {
private:
	int id;
	DtFecha fecha;
	int idVideojuego;
	string nickname;
	string texto;
public:
	DtComentario();
	DtComentario(int, DtFecha, int, string, string);
	virtual ~DtComentario();

	int getId();
	DtFecha getFecha();
	int getIdVideojuego();
	string getNickname();
	string getTexto();
};

#endif /* DTCOMENTARIO_H_ */
