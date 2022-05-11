#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cReceptor : public cPaciente
{

public:
	cReceptor(string _Estado, string _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& Organo);
	virtual ~cReceptor();
	

private:
	cOrgano* Organo;
	string Estado;
	string Fecha_espera;
	string Patologia;
	int Prioridad;
	
};

