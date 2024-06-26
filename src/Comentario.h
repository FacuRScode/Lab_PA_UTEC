/*
 * Comentario.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */

#ifndef COMENTARIO_H_
#define COMENTARIO_H_

#include <iostream>
using namespace std;
#include "DtFecha.h"
#include "PartidaMultijugador.h"

class Comentario {
private:
	int IDCom;
	string texto;
	DtFecha fechaCom;
	PartidaMultijugador Pmultijugador;
public:
	Comentario();
	virtual ~Comentario();

	int getIDCom();
	string getTexto();
	DtFecha getFechaCom();

	void setIDCom(int);
	void setTexto(string);
	void setFechaCom(DtFecha);
};

#endif /* COMENTARIO_H_ */
