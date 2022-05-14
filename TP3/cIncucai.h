#include <iostream>
#include <string>
#include "lista.h"
using namespace std; 


class cReceptor;
class cDonante;
class cPaciente;

class cIncucai
{

public:
	cIncucai();
	virtual ~cIncucai();
	
	cPaciente* elegir_receptor(cLista<cReceptor>* _SubListaReceptores_Corazon);
	bool recibir_paciente(cPaciente*_paciente);
	bool trasporte_transplante(cDonante* _donante);
	bool ingresar_paciente(cPaciente* _paciente);
	cLista<cReceptor, cOrgano>* Buscar_Posibles_Receptores(cDonante* _donante);
	
private:
	
	cPaciente* paciente;
	cLista<cPaciente>* ListaPaciente;
	cLista<cDonante>* ListaDonante;
	cLista<cReceptor>* ListaReceptor;
	cLista<cReceptor>* SubListaReceptores_Corazon;



};

