#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cReceptor : public cPaciente
{

public:
	cReceptor();
	virtual ~cReceptor();
	

private:
	cOrgano* cOrgano;
	string Estado;
	string fecha_espera;
	string Patologia;
	int Prioridad;

};

