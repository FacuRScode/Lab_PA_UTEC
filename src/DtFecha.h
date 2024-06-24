/*
 * DtFecha.h
 *
 *  Created on: 24 jun 2024
 *      Author: Cristian
 */

#ifndef DTFECHA_H_
#define DTFECHA_H_

class DtFecha {
private:
	int dia;
	int mes;
	int anio;
	int horas;
	int minutos;
	int segundos;
public:
	DtFecha();
	DtFecha(int, int ,int, int, int, int);
	virtual ~DtFecha();

	int getDia();
	int getMes();
	int getAnio();
	int getHoras();
	int getMinutos();
	int getSegundos();
};

#endif /* DTFECHA_H_ */
