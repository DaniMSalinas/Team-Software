// softwareEquipo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "persona.h"
#include "Entrenador.h"
#include "futbolista.h"
#include "Medico.h"
#include <iostream>

using namespace std;

persona* equipo[4];

void viajar() {
	for (int i = 0; i < 4; i++) {
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
		equipo[i]->viajar();
	}
	cout << endl;
}

void entrenamiento() {
	for (int i = 0;i < 4; i++) {
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
		equipo[i]->entrenamiento();
	}
	cout << endl;
}

void partido() {
	for (int i = 0;i < 4; i++) {
		cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
		equipo[i]->partidoFutbol();
	}
	cout << endl;
}

void planificar() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Entrenador") {
			cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
			((Entrenador *)equipo[i])->planificarEntrenamiento();
		}
	}
	cout << endl;
}

void entrevistado() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Futbolista") {
			cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> da la ";
			((futbolista *)equipo[i])->entrevista();
		}
	}
	cout << endl;
}

void curar() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Medico") {
			cout << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
			((Medico *)equipo[i])->curarLesion();
		}
	}
	cout << endl;
}

void entrenador() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Entrenador") {
			cout << "Nombre: " << equipo[i]->getNombre() << endl;
			cout << "Apellido: " << equipo[i]->getApellido() << endl;
			cout << "Edad: " << equipo[i]->getEdad() << endl;
			cout << "Estrategia: " << ((Entrenador *)equipo[i])->getEstrategia() << endl;
			cout << endl;
		}
	}
	cout << endl;
}

void jugador() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Futbolista") {
			cout << "Nombre: " << equipo[i]->getNombre() << endl;
			cout << "Apellido: " << equipo[i]->getApellido() << endl;
			cout << "Posicion: " << ((futbolista *)equipo[i])->getPosicion() << endl;
			cout << "Edad: " << equipo[i]->getEdad() << endl;
			cout << "Dorsal: " << ((futbolista *)equipo[i])->getDorsal() << endl;
			cout << endl;
		}
	}
	cout << endl;
}

void medico() {
	for (int i = 0;i < 4; i++) {
		if (equipo[i]->getOcupacion() == "Medico") {
			cout << "Nombre: " << equipo[i]->getNombre() << endl;
			cout << "Apellido: " << equipo[i]->getApellido() << endl;
			cout << "Titulacion: " << ((Medico*)equipo[i])->getTitulacion() << endl;
			cout << "Edad: " << equipo[i]->getEdad() << endl;
			cout << "Experiencia: " << ((Medico *)equipo[i])->getExperiencia() << "años " << endl;
			cout << endl;
		}
	}
	cout << endl;
}

void plantilla() {
	int opcion = 0;

	do {
		cout << "	**** PLANTILLA ****	" << endl;
		cout << "1. Jugadores" << endl;
		cout << "2. Entrenador" << endl;
		cout << "3. Asistencia" << endl;
		cout << "4. Volver al menu" << endl;

		cout << endl << "Selecciona una opcion: ";
		cin >> opcion;
		cout << endl;

		switch (opcion) {
		case 1:
			jugador();
			break;
		case 2:
			entrenador();
			break;
		case 3:
			medico();
			break;
		}
		system("pause");
		system("cls");
	} while (0 <= opcion && opcion < 4);
}

void menu() {
	int opcion = 0;

	do {
		cout << "	**** MENU ****	" << endl;
		cout << "1. Viaje en equipo" << endl;
		cout << "2. Entrenamiento" << endl;
		cout << "3. Partido de fubol" << endl;
		cout << "4. Planificar entrenamiento" << endl;
		cout << "5. Entrevista" << endl;
		cout << "6. Curar lesion" << endl;
		cout << "7. Plantilla" << endl;
		cout << "8. SALIR" << endl;
		cout << endl << "Selecciona una opcion: ";
		cin >> opcion;
		cout << endl;

		switch (opcion) {
			case 1: //Viajar
				viajar();
				break;
			case 2: //Entrenamiento
				entrenamiento();
				break;
			case 3: //Partido de futbol
				partido();
				break;
			case 4: //Planificar entrenamiento
				planificar();
				break;
			case 5: //Entrevista
				entrevistado();
				break;
			case 6: //Curar lesion
				curar();
				break;
			case 7: //Plantilla
				system("cls");
				plantilla();
				break;
		}

		system("pause");
		system("cls");

	} while (0 <= opcion && opcion < 8);
}

int main()
{
	equipo[0] = new futbolista("Leo", "Messi", 31,  10, "Delantero");
	equipo[1] = new futbolista("Neymar", "JR", 25, 11, "Delantero");
	equipo[2] = new Entrenador("Luis", "Enrique", 43, "Ofensiva");
	equipo[3] = new Medico("Daniel", "Maldonado", 23, "Medico", 1);
	menu();

    return 0;
}

