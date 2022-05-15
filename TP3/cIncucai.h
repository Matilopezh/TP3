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
	
	
	bool recibir_paciente(cPaciente*_paciente);
	bool trasporte_transplante(cDonante* _donante);
	bool ingresar_paciente(cPaciente* _paciente);
	void Buscar_Posibles_Receptores(cDonante* _donante);
	cPaciente* elegir_receptor (cDonante* _donante);
	
private:
	
	cPaciente* paciente;
	cLista<cPaciente>* ListaPaciente;
	cLista<cDonante>* ListaDonante;
	cLista<cReceptor>* ListaReceptor;
	cLista<cReceptor>* SubListaReceptores_Corazon;
	cLista<cReceptor>* SubListaReceptores_Rinion;
	cLista<cReceptor>* SubListaReceptores_Higado;
	cLista<cReceptor>* SubListaReceptores_Pancreas;
	cLista<cReceptor>* SubListaReceptores_Huesos;
	cLista<cReceptor>* SubListaReceptores_Corneas;
	cLista<cReceptor>* SubListaReceptores_Pulmones;
	cLista<cReceptor>* SubListaReceptores_Intestino;
	cLista<cReceptor>* SubListaReceptores_Piel;
};

