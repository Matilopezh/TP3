#include "cCentro.h"
#include "cPaciente.h"
#include "cReceptor.h"
#include "cDonante.h"
#include <iostream>
#include <stdlib.h>
#include <string>

cCentro::cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono)
{
	Direccion = _Direccion;
	Nombre = _Nombre;
	Partido = _Partido;
	Provincia = _Provincia;
	Telefono = _Telefono;
}

cCentro::~cCentro(){}

bool cCentro::ablacion(cDonante* Donante){
	
	/*Tengo que establecer fecha y horario de la ablacion en el organo, no se como darme cuenta que organo va a ser al que se le haga la ablacion 
	y llamar al metodo eliminar para eliminar el organo donado de la lista del Donante*/

}

cVehiculo* cCentro::asignar_vehiculos(cReceptor* Receptor, cDonante* Donante){
	if (strcmp(Donante->Centro_Salud->Provincia, Receptor->Centro_Salud->Provincia) != 0) {
		cAvion* avion = new cAvion();
		return avion;
	}
	else if (strcmp(Donante->Centro_Salud->Partido, Receptor->Centro_Salud->Partido) != 0) {
		cHelicoptero* helicoptero = new cHelicoptero();
		return helicoptero;
	}
	else {
		cAmbulancia* Ambulancia = new cAmbulancia();
		return Ambulancia;
	}
}
	
	
}

int cCentro::transplante(cReceptor* Receptor, cOrgano* Organo) {
	if (hora_actual - Organo->GetHoraAblacion() <= 20) { //condicion conceptual, ni idea como comparar fechas (fede no me putees)

		int exito = rand() % 2;
		return exito;
	}
	

}