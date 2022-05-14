
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

class cHelicoptero : public cVehiculo
{

public:
	cHelicoptero();
	virtual ~cHelicoptero();

	void Imprimir();
	bool Transporte(cOrgano* Organo, cCentro* Centro);

};
