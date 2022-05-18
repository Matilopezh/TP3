
#include "cVehiculo.h"
#include <iostream>
#include <string>
using namespace std;
class cAvion : public cVehiculo
{

public:
	cAvion();
	virtual ~cAvion();

	void Imprimir();
	bool Transporte(cOrgano* Organo, cCentro* Centro);

};

class cAvion : public cVehiculo
{

public:
	cAvion();
	virtual ~cAvion();
	string to_String();
	void Imprimir();
	

};
