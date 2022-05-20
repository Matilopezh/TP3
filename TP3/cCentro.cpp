#include "cCentro.h"
#include "cPaciente.h"
#include "cReceptor.h"
#include "cDonante.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "cFecha.h"


class cHelicoptero;
class cAvion;
class cAmbulancia;

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

cVehiculo* cCentro::asignar_vehiculos(cReceptor* Receptor, cDonante* Donante){                  //esto esta todo mal porque lo hice yo
	if (strcmp(Donante->Centro_Salud->Provincia, Receptor->Centro_Salud->Provincia) != 0) {
		cVehiculo* avion = new cAvion();
		return avion;
	}
	else if (strcmp(Donante->Centro_Salud->Partido, Receptor->Centro_Salud->Partido) != 0) {
		cVehiculo* helicoptero = new cHelicoptero();
		return helicoptero;
	}
	else {
		cVehiculo* Ambulancia = new cAmbulancia();
		return Ambulancia;
	}
	
}
	
	


int cCentro::transplante(cReceptor* Receptor) {
	cFecha* hora_actual = new cFecha(9,12,2018);
	hora_actual->SetNow();

	if (hora_actual->DiasEntreFechas(hora_actual, Receptor->Organo->GetHoraAblacion())<= 20) { //condicion conceptual, ni idea como comparar fechas (fede no me putees)

		int exito = rand() % 2;
		return exito;
	}
	

}