#include "cDonante.h"


cDonante::cDonante(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, int _fecha_hora_muerte):cPaciente(_Nombre, _Sexo, _Fecha_nacimiento, _Telefono, _Tipo_sangre, _Centro_Salud)
{
	
	fecha_hora_ablacion = 0;
	fecha_hora_muerte = _fecha_hora_muerte;
}



cDonante::~cDonante(){

}

cLista<cOrgano> cDonante::GetListaOrgano()
{
	return *listaorganos;
}
