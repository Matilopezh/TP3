
#include "cVehiculo.h"
#include <iostream>
#include <string>
using namespace std;
class cHelicoptero : public cVehiculo
{

public:
	cHelicoptero();
	virtual ~cHelicoptero();
	string to_String();
	void Imprimir();
	bool Transporte(cOrgano* Organo, cCentro* Centro);

};
