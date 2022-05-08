#include "cPaciente.h"

class cIncucai
{

public:
	cIncucai();
	virtual ~cIncucai();
	cPaciente *m_cPaciente;

	cPaciente* elegir_receptor();
	bool recibir_paciente();
	bool trasporte_transplante();

private:
	cLista_pacientes cLista_pacientes*;
	cPaciente cPaciente*;

};

