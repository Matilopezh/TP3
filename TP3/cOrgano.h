#include <iostream>
#include <string>
#include "Enum.h"

using namespace std; 
class cOrgano
{

public:
	cOrgano();
	virtual ~cOrgano();

private:
	cFecha* fecha_ablacion;
	Tipo tipo_organo;
	friend class cIncucai;
};
