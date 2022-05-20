#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cFecha;

class cReceptor : public cPaciente
{
public:
	cReceptor(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, unsigned int _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, Estado _estadoreceptor, cFecha& _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& Organo);
	virtual ~cReceptor();
	Estado GetEstado();
	int GetTipoOrgano();
	cOrgano* GetOrgano();
private:
	friend class cIncucai;
	friend class cCentro;
    Estado estadoreceptor;
	cOrgano* Organo;
	cFecha* Fecha_espera;
	string Patologia;
	int Prioridad;
	
	
};

