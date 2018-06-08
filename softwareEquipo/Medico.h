#pragma once
#include "persona.h"
#include "stdafx.h"

class Medico : public persona{
private:
	string titulacion;
	int experiencia;
public:
	Medico(string nombre, string apellido, int edad, string titulacion, int experiencia);
	~Medico();
	void partidoFutbol();
	void entrenamiento();
	void curarLesion();
	string getTitulacion();
	int getExperiencia();
};

