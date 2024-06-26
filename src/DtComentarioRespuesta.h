/*
 * DtComentarioRespuesta.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */


#ifndef DTCOMENTARIORESPUESTA_H_
#define DTCOMENTARIORESPUESTA_H_

#include <iostream>
using namespace std;
#include "DtFecha.h"
#include "DtComentario.h"

class DtComentarioRespuesta: public DtComentario {
private:
	int id;
	DtFecha fecha;
	int idVideojuego;
	string nickname;
	string texto;
	int idComentario;
public:
	DtComentarioRespuesta();
	DtComentarioRespuesta(int, DtFecha, int, string, string, int);
	virtual ~DtComentarioRespuesta();

	int getId();
	DtFecha getFecha();
	int getIdVideojuego();
	string getNickname();
	string getTexto();
	int getIdComentario();
};

#endif /* DTCOMENTARIORESPUESTA_H_ */
