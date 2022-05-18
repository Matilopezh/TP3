#include <iostream>
#include <string>
#include "lista.h"
using namespace std; 


class cReceptor;
class cDonante;
class cPaciente;
class cCentro;

struct ListaReceptor{
	cLista<cReceptor>* SubListaReceptores_Corazon = nullptr;
	cLista<cReceptor>* SubListaReceptores_Pancreas = nullptr;
	cLista<cReceptor>* SubListaReceptores_Huesos = nullptr;
	cLista<cReceptor>* SubListaReceptores_Intestino = nullptr;
	cLista<cReceptor>* SubListaReceptores_Rinion = nullptr;
	cLista<cReceptor>* SubListaReceptores_Pulmones = nullptr;
	cLista<cReceptor>* SubListaReceptores_Corneas = nullptr;
	cLista<cReceptor>* SubListaReceptores_Higado = nullptr;
	cLista<cReceptor>* SubListaReceptores_Piel = nullptr;
};
class cIncucai
{

public:
	cIncucai();
	virtual ~cIncucai();
	
	
	void recibir_paciente(cPaciente*_paciente);
	void trasporte_transplante(cDonante* _donante,cReceptor* Receptor);
	
	void Buscar_Posibles_Receptores(cDonante* _donante);
	cReceptor* elegir_receptor (cDonante* _donante);
	
private:
	ListaReceptor FiltrarReceptoresPorTipoDeSangre(string _tipo_sangre);
	void ingresar_paciente(cPaciente* _paciente);
	cPaciente* paciente;
	cLista<cDonante>* ListaDonante;
	cLista<cCentro>* ListaCentros;
	cLista<cReceptor>* Lista_Receptor;
	ListaReceptor 	listaReceptores;//Capaz cambiar nombre
};

