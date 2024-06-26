/*
 * Jugador.h
 *
 *  Created on: 25 jun 2024
 *      Author: Cristian
 */
#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <vector>
#include <iostream>
using namespace std;
#include "Usuario.h"
#include "Comentario.h"
#include "PartidasAbandonadas.h"
#include "PartidasUnidas.h"
#include "Partida.h"

class Jugador : public Usuario
{
private:
    string email;
    string contrasenia;
    string nickname;
    string descripcion;
    int cantSeguidores;
    vector<Jugador*> jugadoresSeguidos;
    vector<Comentario*> comentarios;
    vector<PartidasAbandonadas*> partidasAbandonadas;
    vector<PartidasUnidas*> partidasUnidas;
    vector<Partida*> partidasFinalizadas;
    vector<Partida*> partidasIniciadas;
public:
    Jugador();
    virtual ~Jugador();

    string getEmail();
    string getContrasenia();
    string getNickname();
    string getDescripcion();
    int getCantSeguidores();

    void setEmail(string);
    void setConstrasenia(string);
    void setNickname(string);
    void setDescripcion(string);
    void setCantSeguidores(int);
};

#endif /* JUGADOR_H_ */
