#include "cCentro.h"
#include <iostream>
#include <string>
using namespace std; 


class cPaciente
{

public:
	 cPaciente(string _Nombre, bool _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud);
	virtual ~cPaciente();
	

protected:
	cCentro* Centro_Salud;
	string Fecha_nacimiento;
	string Nombre;
	bool Sexo;
	string Telefono;
	string Tipo_sangre;

};
