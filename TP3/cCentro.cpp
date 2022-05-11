#include "cCentro.h"
#include "cReceptor.h"

cCentro::cCentro(){

}





cCentro::cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono)
{
	Direccion = _Direccion;
	Nombre = _Nombre;
	Partido = _Partido;
	Provincia = _Provincia;
	Telefono = _Telefono;
}

cCentro::~cCentro(){}


bool cCentro::ablacion(){

	return false;
}

bool cCentro::asignar_vehiculos(cReceptor* Receptor, cDonante* Donante)
{
	
}



void cCentro::transplante(){

}