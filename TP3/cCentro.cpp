#include "cCentro.h"
#include "cPaciente.h"
#include <iostream>
#include <stdlib.h>

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

	/*Tengo que establecer fecha y horario de la ablacion en el organo
	y llamar al metodo eliminar para eliminar el organo donado de la lista del Donante*/
}

bool cCentro::asignar_vehiculos(cReceptor* Receptor, cDonante* Donante){
	
}

void cCentro::transplante() {
	/*Para realizar el trasplante se verifica
	que no hayan transcurrido más de 20 horas desde la ablación del órgano y procede a
	realizar el trasplante.Si el trasplante falla, se cambia la prioridad del paciente receptor a
	la mayor prioridad y se setea su estado a inestable. Si el trasplante es exitoso o no se
	define con un random equiprobable.*/
	int exito = rand() % 2;
	if (exito) {//equiprobabilidad de que salga tanto 0(false) como 1(true)

	}

}