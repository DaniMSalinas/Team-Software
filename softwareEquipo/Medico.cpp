#include "stdafx.h"
#include "Medico.h"
#include <string>
#include <iostream>

using namespace std;

Medico::Medico(string nombre, string apellido, int edad, string titulacion, int experiencia) :persona(nombre, apellido, edad), titulacion(titulacion), experiencia(experiencia) {
	ocupacion = "Medico";
}

Medico::~Medico() {}

void Medico::entrenamiento() {
	cout << "Da asistencia en el entrenamiento" << endl;
}

void Medico::partidoFutbol() {
	cout << "Da asistencia en el partido de futbol" << endl;
}

void Medico::curarLesion() {
	cout << "Cura la lesion" << endl;
}

string Medico::getTitulacion() {
	return titulacion;
}

int Medico::getExperiencia(){
	return experiencia;
}
