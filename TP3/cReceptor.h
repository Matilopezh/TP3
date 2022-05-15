#include <iostream>
#include <string>
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"

class cReceptor : public cPaciente
{
public:
	cReceptor(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, Estado _estadoreceptor, string _Fecha_espera, string _Patologia, int _Prioridad, cOrgano& Organo);
	virtual ~cReceptor();
	Estado GetEstado();
	cOrgano* GetTipoOrgano();
private:
    Estado estadoreceptor;
	cOrgano* Organo;
	string Fecha_espera;
	string Patologia;
	int Prioridad;
	friend class cIncucai;
};

