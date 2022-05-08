#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cReceptor : public cPaciente
{

public:
	cReceptor(string _Estado, string _fecha_espera, string _Patologia, int _Prioridad);
	virtual ~cReceptor();
	

private:
	cOrgano* cOrgano;
	string Estado;
	string fecha_espera;
	string Patologia;
	int Prioridad;

};

