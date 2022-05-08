#include "cPaciente.h"
#include "cOrgano.h"

class cDonante : public cPaciente
{

public:
	cDonante();
	virtual ~cDonante();
	cOrgano *m_cOrgano;

private:
	cLista_org cLista_org*;
	String fecha_hora_ablacion;
	String fecha_hora_muerte;

};
