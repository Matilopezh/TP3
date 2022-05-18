#include "cDonante.h"


cDonante::cDonante(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, unsigned int _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, cFecha& _fecha_hora_muerte, clista<cOrgano>& _lista_organos):cPaciente(_Nombre, _Sexo, _Fecha_nacimiento, _Telefono, _Tipo_sangre, _Centro_Salud)
{
	lista_organos = _lista_organos;
	fecha_hora_ablacion = 0;
	fecha_hora_muerte = &_fecha_hora_muerte;
}



cDonante::~cDonante(){

}

cLista<cOrgano> cDonante::GetListaOrgano()
{
	return *lista_organos;
}
