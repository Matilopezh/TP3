#include "cCentro.h"
#include "cReceptor.h"
#include "cDonante.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "cFecha.h"




cCentro::cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono)
{
	Direccion = _Direccion;
	Nombre = _Nombre;
	Partido = _Partido;
	Provincia = _Provincia;
	Telefono = _Telefono;
}

cCentro::~cCentro(){}

bool cCentro::ablacion(cDonante* Donante, int Organo){
	for (int i = 0; i < Donante->lista_organos->GetTam(); i++) {
		/*if () {//si encontras el organo
			//acceder al organo y setear la hora
		}*/
	}
	
	return false;
}

cVehiculo* cCentro::asignar_vehiculos(cReceptor* Receptor, cDonante* Donante){ //esto esta todo mal porque lo hice yo
	
	
}
	
	


int cCentro::transplante(cReceptor* Receptor) {
	cFecha* hora_actual = new cFecha(9,12,2018);
	hora_actual->SetNow();
	cOrgano* Aux = nullptr;
	//Aux = (Receptor->GetOrgano());
	/*if (hora_actual->DiasEntreFechas(hora_actual, )<= 20) { //condicion conceptual, ni idea como comparar fechas (fede no me putees)

		int exito = rand() % 2;
		return exito;
	}*/
}