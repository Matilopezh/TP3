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





cPaciente* cIncucai::elegir_receptor(cLista<cReceptor, cOrgano>* _SubListaReceptores_Corazon){

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

cLista<cReceptor, cOrgano>* cIncucai::Buscar_Posibles_Receptores(cDonante* _donante)
{
	
	cLista<cOrgano>* aux = &_donante->GetListaOrgano();
	
	for (int i = 0; i < aux->GetTam(); i++) {

		switch (_donante->listaorganos->lista[i]->tipo_organo) {
		case 0: //CORAZON
			for (int j = 0; j < ListaReceptor->GetTam(); j++)
			{
				ListaReceptor->lista[j]->Organo->tipo_organo;
				if ((ListaReceptor->lista[j]->Organo->tipo_organo) == 0)
				{
					(*SubListaReceptores_Corazon)+(ListaReceptor->lista[j]);
				}
				return SubListaReceptores_Corazon;
			}
				break;
		case 1://RINION
			break;
		case 2://PULMON
			break;
		case 3://HIGADO
			break;
		case 4://PANCREAS
			break;
		case 5://HUESO
			break;
		case 6://INTESTINO
			break;
		case 6://PIEL
			break;
		case 6://CORNEAS
			break;

		}
	}

		
		
	
}

bool cIncucai::trasporte_transplante(cDonante* _donante){

	return false;
}




