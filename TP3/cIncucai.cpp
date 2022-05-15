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





cPaciente* cIncucai:: elegir_receptor (cDonante* _donante)
{
	//algo huele mal aqui
	if (SubListaReceptores_Corazon != NULL)
	{
		cLista<cReceptor>* SubSublistacorazon = nullptr;
		for (int i = 0; i < SubListaReceptores_Corazon->GetTam(); i++)
		{
			if (SubListaReceptores_Corazon->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistacorazon) + (SubListaReceptores_Corazon->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Corneas != NULL)
	{
		cLista<cReceptor>* SubSublistaCorneas = nullptr;
		for (int i = 0; i < SubListaReceptores_Corneas->GetTam(); i++)
		{
			if (SubListaReceptores_Corneas->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaCorneas) + (SubListaReceptores_Corneas->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Pulmones != NULL)
	{
		cLista<cReceptor>* SubSublistaPulmones = nullptr;
		for (int i = 0; i < SubListaReceptores_Corazon->GetTam(); i++)
		{
			if (SubListaReceptores_Pulmones->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaPulmones) + (SubListaReceptores_Pulmones->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Piel != NULL)
	{
		cLista<cReceptor>* SubSublistaPiel = nullptr;
		for (int i = 0; i < SubListaReceptores_Piel->GetTam(); i++)
		{
			if (SubListaReceptores_Piel->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaPiel) + (SubListaReceptores_Piel->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Higado != NULL)
	{
		cLista<cReceptor>* SubSublistaHigado = nullptr;
		for (int i = 0; i < SubListaReceptores_Higado->GetTam(); i++)
		{
			if (SubListaReceptores_Higado->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaHigado) + (SubListaReceptores_Higado->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Rinion != NULL)
	{
		cLista<cReceptor>* SubSublistaRinion = nullptr;
		for (int i = 0; i < SubListaReceptores_Rinion->GetTam(); i++)
		{
			if (SubListaReceptores_Rinion->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaRinion) + (SubListaReceptores_Rinion->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Pancreas != NULL)
	{
		cLista<cReceptor>* SubSublistaPancreas = nullptr;
		for (int i = 0; i < SubListaReceptores_Pancreas->GetTam(); i++)
		{
			if (SubListaReceptores_Pancreas->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaPancreas) + (SubListaReceptores_Pancreas->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Huesos != NULL)
	{
		cLista<cReceptor>* SubSublistaHuesos = nullptr;
		for (int i = 0; i < SubListaReceptores_Huesos->GetTam(); i++)
		{
			if (SubListaReceptores_Huesos->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaHuesos) + (SubListaReceptores_Huesos->lista[i]);
			}

		}
	}
	if (SubListaReceptores_Intestino != NULL)
	{
		cLista<cReceptor>* SubSublistaIntestino = nullptr;
		for (int i = 0; i < SubListaReceptores_Intestino->GetTam(); i++)
		{
			if (SubListaReceptores_Intestino->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaIntestino) + (SubListaReceptores_Intestino->lista[i]);
			}

		}
	}


	
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
					(*SubListaReceptores_Rinion) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 2) && ((_donante->listaorganos->lista[i]->tipo_organo) == 2))
				{
					(*SubListaReceptores_Pulmones) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 3) && ((_donante->listaorganos->lista[i]->tipo_organo) == 3))
				{
					(*SubListaReceptores_Higado) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 4) && ((_donante->listaorganos->lista[i]->tipo_organo) == 4))
				{
					(*SubListaReceptores_Pancreas) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 5) && ((_donante->listaorganos->lista[i]->tipo_organo) == 5))
				{
					(*SubListaReceptores_Huesos) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 6) && ((_donante->listaorganos->lista[i]->tipo_organo) == 6))
				{
					(*SubListaReceptores_Intestino) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 7) && ((_donante->listaorganos->lista[i]->tipo_organo) == 7))
				{
					(*SubListaReceptores_Piel) + (ListaReceptor->lista[j]);
				}
				if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 8) && ((_donante->listaorganos->lista[i]->tipo_organo) == 8))
				{
					(*SubListaReceptores_Corneas) + (ListaReceptor->lista[j]);
				}
			}
	
	}

		
		
	
}

bool cIncucai::trasporte_transplante(cDonante* _donante){

	return false;
}




