#include "cPaciente.h"

string Tipo_sangre;
cPaciente::cPaciente(string _Nombre, bool _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre) {
	Nombre = _Nombre;
	Sexo = _Sexo;
	Fecha_nacimiento = _Fecha_nacimiento;
	Telefono = _Telefono;
	Tipo_sangre = _Tipo_sangre;
	
}



cPaciente::~cPaciente(){

}