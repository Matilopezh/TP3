#include "cCentro.h"
#include <iostream>
#include <string>
using namespace std; 


class cPaciente
{

public:
	cPaciente();
	virtual ~cPaciente();
	

private:
	cCentro* cCentro;
	string Fecha_nacimiento;
	string Nombre;
	bool Sexo;
	string Telefono;
	string Tipo_sangre;

};
