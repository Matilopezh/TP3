#include "cCentro.h"
#include <iostream>
#include <string>
using namespace std; 


class cPaciente
{

public:
	cPaciente();
	 cPaciente(string _Nombre, bool _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre);
	virtual ~cPaciente();
	

protected:
	cCentro* cCentro;
	string Fecha_nacimiento;
	string Nombre;
	bool Sexo;
	string Telefono;
	string Tipo_sangre;

};
