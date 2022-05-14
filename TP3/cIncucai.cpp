#include "cIncucai.h"
#include "cReceptor.h"
#include "cDonante.h"
#include "cPaciente.h"
#include "lista.h"

#define Tam 10

class cOrgano;
class cDonante;

cIncucai::cIncucai(){
	paciente = nullptr;
	ListaReceptor = nullptr;
	
}



cIncucai::~cIncucai(){}//no olvidar hacer el destructor de las listas





cPaciente* cIncucai::elegir_receptor(){

	//SubListaReceptores_Corazon->
	
}


bool cIncucai::recibir_paciente(cPaciente* _paciente){
	cDonante* Donante_Aux = nullptr;
	Donante_Aux = dynamic_cast<cDonante*>(_paciente);
	cReceptor* Receptor_Aux = nullptr;
	Receptor_Aux = dynamic_cast<cReceptor*>(_paciente);
	if (Donante_Aux != nullptr) {
		(*ListaDonante)+(Donante_Aux);
		Buscar_Posibles_Receptores(Donante_Aux);
	}
	else {
		(*ListaReceptor)+(Receptor_Aux);
	}
}

void cIncucai::Buscar_Posibles_Receptores(cDonante* _donante)
{
	      
	for (int i = 0; i < _donante->listaorganos->ca; i++) {

			for (int j = 0; j < ListaReceptor->GetTam(); j++)
			{	
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 0) && ((_donante->listaorganos->lista[i]->tipo_organo)==0))
				{
					(*SubListaReceptores_Corazon)+(ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 1) && ((_donante->listaorganos->lista[i]->tipo_organo) == 1))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 2) && ((_donante->listaorganos->lista[i]->tipo_organo) == 2))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 3) && ((_donante->listaorganos->lista[i]->tipo_organo) == 3))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 4) && ((_donante->listaorganos->lista[i]->tipo_organo) == 4))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 5) && ((_donante->listaorganos->lista[i]->tipo_organo) == 5))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 6) && ((_donante->listaorganos->lista[i]->tipo_organo) == 6))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 7) && ((_donante->listaorganos->lista[i]->tipo_organo) == 7))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 8) && ((_donante->listaorganos->lista[i]->tipo_organo) == 8))
				{
					(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
				}
			}
	
	}

		
		
	
}

bool cIncucai::trasporte_transplante(cDonante* _donante){

	return false;
}




