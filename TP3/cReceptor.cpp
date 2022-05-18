#include "cReceptor.h"


cReceptor::cReceptor(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, unsigned int _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, Estado _estadoreceptor, cFecha& _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& _Organo): cPaciente(_Nombre, _Sexo, _Fecha_nacimiento, _Telefono, _Tipo_sangre, _Centro_Salud)
{
	estadoreceptor = _estadoreceptor;
	Fecha_espera = &_Fecha_espera;
	Patologia = _Patologia;
	Prioridad = _Prioridad;
	Organo = &_Organo;
}

cReceptor::~cReceptor(){}
Estado cReceptor::GetEstado()
{
	return estadoreceptor;
}
int cReceptor::GetTipoOrgano()
{
	return Organo->GetTipoOrgano();
}