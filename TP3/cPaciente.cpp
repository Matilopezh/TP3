#include "cPaciente.h"

string Tipo_sangre;
cPaciente::cPaciente(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud) {
	Nombre = _Nombre;
	Sexo = _Sexo;
	Fecha_nacimiento = _Fecha_nacimiento;
	Telefono = _Telefono;
	Tipo_sangre = _Tipo_sangre;
	Centro_Salud = &_Centro_Salud;
}



cPaciente::~cPaciente(){

}


