
#include "cVehiculo.h"
#include <iostream>
#include <string>
using namespace std;
class cAmbulancia : public cVehiculo
{

public:
	cAmbulancia();
	virtual ~cAmbulancia();
	string to_String();
	void Imprimir();
	bool Transporte(cOrgano* Organo, cCentro* Centro);

};

