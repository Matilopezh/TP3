#include "cReceptor.h"


cReceptor::cReceptor(string _Estado, string _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& _Organo){
	Estado = _Estado;
	fecha_espera = _fecha_espera;
	Patologia = _Patologia;
	Prioridad = _Prioridad;
	Organo = _Organo;
}

cReceptor::~cReceptor(){}