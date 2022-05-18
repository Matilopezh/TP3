#include <iostream>
#include <string>
#include "Enum.h"


using namespace std; 
class cFecha;

class cOrgano
{

public:
	cOrgano(Tipo _Organo);
	virtual ~cOrgano();
	cFecha* GetFechaAblacion();
	Tipo GetTipoOrgano();

private:
	cFecha* fecha_ablacion;
	Tipo tipo_organo;
	friend class cIncucai;
};
