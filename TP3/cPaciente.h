#include "cCentro.h"
#include "cOrgano.h"
#include <iostream>
#include <string>
using namespace std; 

class cFecha;

class cPaciente
{

public:
	cPaciente(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, unsigned int _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud);
	virtual ~cPaciente();
	


protected:
	cCentro* Centro_Salud;
	cFecha* Fecha_nacimiento;
	string Nombre;
	string Sexo;
	unsigned int Telefono;
	string Tipo_sangre;

};
