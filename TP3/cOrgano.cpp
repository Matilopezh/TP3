#include "cOrgano.h"
#include "cFecha.h"

cOrgano::cOrgano(Tipo _Organo){
	tipo_organo = _Organo;
}



cOrgano::~cOrgano(){

}
Tipo cOrgano::GetTipoOrgano()
{
	return tipo_organo;
}
