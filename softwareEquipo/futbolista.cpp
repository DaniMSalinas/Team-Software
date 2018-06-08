#include "stdafx.h"
#include "futbolista.h"
#include <string>
#include <iostream>

using namespace std;

futbolista::futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) :persona(nombre, apellido, edad), dorsal(dorsal), posicion(posicion) {
	ocupacion = "Futbolista";
}

futbolista::~futbolista() {}

void futbolista::partidoFutbol() {
	cout << "Juega" << endl;
}

void futbolista::entrenamiento() {
	cout << "Entrena" << endl;
}

void futbolista::entrevista() {
	cout << "entrevista" << endl;
}

string futbolista::getPosicion() {
	return posicion;
}

int futbolista::getDorsal() {
	return dorsal;
}
