#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class persona {
protected:
	string nombre;
	string apellido;
	string ocupacion;
	int edad;
public:
	persona(string nombre, string apellido, int edad);
	~persona();
	void viajar();
	virtual void partidoFutbol();
	virtual void entrenamiento();
	string getNombre();
	string getApellido();
	string getOcupacion();
	int getEdad();
};