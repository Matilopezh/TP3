#include "cCentro.h"

class cPaciente
{

public:
	cPaciente();
	virtual ~cPaciente();
	cCentro *m_cCentro;

private:
	cPaciente cCentro*;
	String Fecha_nacimiento;
	String Nombre;
	booleano Sexo;
	String Telefono;
	String Tipo_sangre;

};
