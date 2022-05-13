#include <iostream>
#include <string>
#include "lista.h"
using namespace std; 
#include "cPaciente.h"
#include "cOrgano.h"



class cDonante : public cPaciente
{
	friend class cCentro;
public:
	cDonante(string _Nombre, string _Sexo, string _Fecha_nacimiento, string _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, int _fecha_hora_muerte);
	virtual ~cDonante();
	cLista<cOrgano>GetListaOrgano();//revisar

private:
	cLista<cOrgano>* listaorganos;
	int fecha_hora_ablacion;
	int fecha_hora_muerte;
	
};
