#include "stdafx.h"
#include "Entrenador.h"
#include <iostream>

using namespace std;

Entrenador::Entrenador(string nombre, string apellido, int edad, string estrategia) : persona(nombre, apellido, edad), estrategia(estrategia) {
	ocupacion = "Entrenador";
}

Entrenador::~Entrenador() {}

void Entrenador::partidoFutbol() {
	cout << "Dirige el partido de futbol" << endl;
}

void Entrenador::entrenamiento() {
	cout << "Dirigne el entrenamiento" << endl;
}

void Entrenador::planificarEntrenamiento() {
	cout << "Planifica el entrenamiento" << endl;
}

string Entrenador::getEstrategia() {
	return estrategia;
}