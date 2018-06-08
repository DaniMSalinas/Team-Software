#pragma once
#include "persona.h"
#include <string>

class Entrenador : public persona{
private:
	string estrategia;
public:
	Entrenador(string nombre, string apellido, int edad, string estrategia);
	~Entrenador();
	void partidoFutbol();
	void entrenamiento();
	void planificarEntrenamiento();
	string getEstrategia();
};

