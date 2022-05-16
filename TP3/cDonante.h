#include <iostream>
#include <string>
#include "lista.h"
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"
#include "Enum.h"

class cFecha;

class cDonante : public cPaciente
{
	friend class cCentro;
public:
	cDonante(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, cFecha& _fecha_hora_muerte);
	virtual ~cDonante();
	cLista<cOrgano>GetListaOrgano();//revisar

private:
	cLista<cOrgano>* listaorganos;
	cFecha* fecha_hora_ablacion;
	cFecha* fecha_hora_muerte;
	friend class cIncucai;
};
