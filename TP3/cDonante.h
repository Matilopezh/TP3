#include <iostream>
#include <string>
#include "lista.h"
#include "cPaciente.h"
#include "cOrgano.h"
#include "Enum.h"

using namespace std;
class cFecha;

class cDonante : public cPaciente
{
	friend class cCentro;
public:
	cDonante(string _Nombre, string _Sexo, cFecha& _Fecha_nacimiento, unsigned int _Telefono, string _Tipo_sangre, cCentro& _Centro_Salud, cFecha& _fecha_hora_muerte, clista<cOrgano>& _listaorganos);
	virtual ~cDonante();
	cLista<cOrgano>GetListaOrgano();//revisar

private:
	cLista<cOrgano>* lista_organos;
	cFecha* fecha_hora_muerte;
	friend class cIncucai;
};
