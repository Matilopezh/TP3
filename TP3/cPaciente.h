#include "cCentro.h"
#include "cOrgano.h"
#include <iostream>
#include <string>
using namespace std; 


class cPaciente
{

public:
	cPaciente(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud);
	virtual ~cPaciente();
	


protected:
	cCentro* Centro_Salud;
	string Fecha_nacimiento;
	string Nombre;
	string Sexo;
	string Telefono;
	string Tipo_sangre;

};
