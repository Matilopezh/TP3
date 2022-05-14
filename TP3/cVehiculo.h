#include "cCentro.h"
#include <iostream>
#include <string>
using namespace std;
class cOrgano;
class cVehiculo
{

public:
	cVehiculo();
	virtual ~cVehiculo();
	virtual string to_String()=0;
	virtual void Imprimir()=0;
	virtual bool Transporte(cOrgano* Organo, cCentro* Centro)=0;

};
