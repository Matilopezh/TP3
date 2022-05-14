#include "cReceptor.h"


cReceptor::cReceptor(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, string _Estado, string _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& _Organo): cPaciente(_Nombre, _Sexo, _Fecha_nacimiento, _Telefono, _Tipo_sangre, _Centro_Salud)
{
	Estado = _Estado;
	Fecha_espera = _Fecha_espera;
	Patologia = _Patologia;
	Prioridad = _Prioridad;
	Organo = &_Organo;
}

cReceptor::~cReceptor(){}
string cReceptor::GetEstado()
{
	return Estado;
}