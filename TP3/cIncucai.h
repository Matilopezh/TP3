#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"

class cIncucai
{

public:
	cIncucai();
	virtual ~cIncucai();
	
	cPaciente* elegir_receptor();
	bool recibir_paciente();
	bool trasporte_transplante();

private:
	cLista_pacientes* cLista_pacientes;
	cPaciente* cPaciente;

};

