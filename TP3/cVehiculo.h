#include "cCentro.h"
#include "cOrgano.h"
#include <iostream>
#include <string>
using namespace std;
class cVehiculo
{

public:
	cVehiculo();
	virtual ~cVehiculo();

	virtual void Imprimir();
	virtual bool Transporte()=0;

};
