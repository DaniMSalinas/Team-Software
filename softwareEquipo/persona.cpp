#include "stdafx.h"
#include "persona.h"
#include <string>
#include <iostream>

using namespace std;

persona::persona(string nombre, string apellido, int edad) :nombre(nombre), apellido(apellido), edad(edad) {}

persona::~persona() {}

void persona::viajar(){
	cout << "Viaja con el equipo" << endl;
}

void persona::partidoFutbol() {}

void persona::entrenamiento() {}

string persona::getNombre() {
	return nombre;
}

string persona::getApellido() {
	return apellido;
}

string persona::getOcupacion() {
	return ocupacion;
}

int persona::getEdad() {
	return edad;
}