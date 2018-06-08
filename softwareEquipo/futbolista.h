#pragma once
#include "stdafx.h"
#include "persona.h"

class futbolista : public persona{
private:
	int dorsal;
	string posicion;
public:
	futbolista(string nombre, string apellido, int edad, int dorsal, string posicion);
	~futbolista();
	void partidoFutbol();
	void entrenamiento();
	void entrevista();
	string getPosicion();
	int getDorsal();
};




