#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cDonante : public cPaciente
{

public:
	cDonante(string _fecha_hora_ablacion, string _fecha_hora_muerte);
	virtual ~cDonante();

private:
	//cLista_org* cLista_org;
	string fecha_hora_ablacion;
	string fecha_hora_muerte;

};
