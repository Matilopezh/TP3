#include "cPaciente.h"
#include "cOrgano.h"

class cReceptor : public cPaciente
{

public:
	cReceptor();
	virtual ~cReceptor();
	cOrgano *m_cOrgano;

private:
	cOrgano cOrgano*;
	String Estado;
	String fecha_espera;
	String Patologia;
	int Prioridad;

};

