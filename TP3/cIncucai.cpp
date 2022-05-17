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
	 ListaDonante;
     SubListaReceptores_Corazon= nullptr;
	 SubListaReceptores_Rinion =nullptr;
	 SubListaReceptores_Higado =nullptr;
	 SubListaReceptores_Pancreas= nullptr;
	 SubListaReceptores_Huesos =nullptr;
	 SubListaReceptores_Corneas= nullptr;
	 SubListaReceptores_Pulmones= nullptr;
	 SubListaReceptores_Intestino =nullptr;
	 SubListaReceptores_Piel= nullptr;
}

cIncucai::~cIncucai(){}//no olvidar hacer el destructor de las listas!!!!!!

cReceptor* cIncucai::elegir_receptor(cDonante* _donante)
{
	//algo huele mal aqui
	if (SubListaReceptores_Corazon != NULL)
	{
		cLista<cReceptor>* SubSublistacorazon = nullptr;
		for (int i = 0; i < SubListaReceptores_Corazon->GetTam(); i++){
			if (SubListaReceptores_Corazon->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistacorazon) + (SubListaReceptores_Corazon->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistacorazon->GetTam(); j++){
			for (int k = 0; k < SubSublistacorazon->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistacorazon->lista[k]->Prioridad > SubSublistacorazon->lista[k + 1]->Prioridad){
					aux = SubSublistacorazon->lista[k];
					SubSublistacorazon->lista[k] = SubSublistacorazon->lista[k + 1];//lista ordenada creo
					SubSublistacorazon->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistacorazon->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Corneas != NULL)
	{
		cLista<cReceptor>* SubSublistaCorneas = nullptr;
		for (int i = 0; i < SubListaReceptores_Corneas->GetTam(); i++){
			if (SubListaReceptores_Corneas->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaCorneas) + (SubListaReceptores_Corneas->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaCorneas->GetTam(); j++){
			for (int k = 0; k < SubSublistaCorneas->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaCorneas->lista[k]->Prioridad > SubSublistaCorneas->lista[k + 1]->Prioridad){
					aux = SubSublistaCorneas->lista[k];
					SubSublistaCorneas->lista[k] = SubSublistaCorneas->lista[k + 1];//lista ordenada creo
					SubSublistaCorneas->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaCorneas->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Pulmones != NULL){
		cLista<cReceptor>* SubSublistaPulmones = nullptr;
		for (int i = 0; i < SubListaReceptores_Pulmones->GetTam(); i++){
			if (SubListaReceptores_Pulmones->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaPulmones) + (SubListaReceptores_Pulmones->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaPulmones->GetTam(); j++){
			for (int k = 0; k < SubSublistaPulmones->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaPulmones->lista[k]->Prioridad > SubSublistaPulmones->lista[k + 1]->Prioridad){
					aux = SubSublistaPulmones->lista[k];
					SubSublistaPulmones->lista[k] = SubSublistaPulmones->lista[k + 1];//lista ordenada creo
					SubSublistaPulmones->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaPulmones->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Piel != NULL)
	{
		cLista<cReceptor>* SubSublistaPiel = nullptr;
		for (int i = 0; i < SubListaReceptores_Piel->GetTam(); i++){
			if (SubListaReceptores_Piel->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaPiel) + (SubListaReceptores_Piel->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaPiel->GetTam(); j++){
			for (int k = 0; k < SubSublistaPiel->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaPiel->lista[k]->Prioridad > SubSublistaPiel->lista[k + 1]->Prioridad){
					aux = SubSublistaPiel->lista[k];
					SubSublistaPiel->lista[k] = SubSublistaPiel->lista[k + 1];//lista ordenada creo
					SubSublistaPiel->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaPiel->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Higado != NULL)
	{
		cLista<cReceptor>* SubSublistaHigado = nullptr;
		for (int i = 0; i < SubListaReceptores_Higado->GetTam(); i++){
			if (SubListaReceptores_Higado->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaHigado) + (SubListaReceptores_Higado->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaHigado->GetTam(); j++){
			for (int k = 0; k < SubSublistaHigado->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaHigado->lista[k]->Prioridad > SubSublistaHigado->lista[k + 1]->Prioridad){
					aux = SubSublistaHigado->lista[k];
					SubSublistaHigado->lista[k] = SubSublistaHigado->lista[k + 1];//lista ordenada creo
					SubSublistaHigado->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaHigado->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Rinion != NULL)
	{
		cLista<cReceptor>* SubSublistaRinion = nullptr;
		for (int i = 0; i < SubListaReceptores_Rinion->GetTam(); i++){
			if (SubListaReceptores_Rinion->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaRinion) + (SubListaReceptores_Rinion->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaRinion->GetTam(); j++){
			for (int k = 0; k < SubSublistaRinion->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaRinion->lista[k]->Prioridad > SubSublistaRinion->lista[k + 1]->Prioridad){
					aux = SubSublistaRinion->lista[k];
					SubSublistaRinion->lista[k] = SubSublistaRinion->lista[k + 1];//lista ordenada creo
					SubSublistaRinion->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaRinion->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Pancreas != NULL)
	{
		cLista<cReceptor>* SubSublistaPancreas = nullptr;
		for (int i = 0; i < SubListaReceptores_Pancreas->GetTam(); i++){
			if (SubListaReceptores_Pancreas->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaPancreas) + (SubListaReceptores_Pancreas->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaPancreas->GetTam(); j++){
			for (int k = 0; k < SubSublistaPancreas->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaPancreas->lista[k]->Prioridad > SubSublistaPancreas->lista[k + 1]->Prioridad){
					aux = SubSublistaPancreas->lista[k];
					SubSublistaPancreas->lista[k] = SubSublistaPancreas->lista[k + 1];//lista ordenada creo
					SubSublistaPancreas->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaPancreas->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}

	}
	if (SubListaReceptores_Huesos != NULL)
	{
		cLista<cReceptor>* SubSublistaHuesos = nullptr;
		for (int i = 0; i < SubListaReceptores_Huesos->GetTam(); i++){
			if (SubListaReceptores_Huesos->lista[i]->Tipo_sangre == _donante->Tipo_sangre){
				(*SubSublistaHuesos) + (SubListaReceptores_Huesos->lista[i]);
			}
		}
		for (int j = 0; j < SubSublistaHuesos->GetTam(); j++){
			for (int k = 0; k < SubSublistaHuesos->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaHuesos->lista[k]->Prioridad > SubSublistaHuesos->lista[k + 1]->Prioridad){
					aux = SubSublistaHuesos->lista[k];
					SubSublistaHuesos->lista[k] = SubSublistaHuesos->lista[k + 1];//lista ordenada creo
					SubSublistaHuesos->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaHuesos->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}
	if (SubListaReceptores_Intestino != NULL)
	{
		cLista<cReceptor>* SubSublistaIntestino = nullptr;
		for (int i = 0; i < SubListaReceptores_Intestino->GetTam(); i++){
			if (SubListaReceptores_Intestino->lista[i]->Tipo_sangre == _donante->Tipo_sangre)
			{
				(*SubSublistaIntestino) + (SubListaReceptores_Intestino->lista[i]);
			}

		}
		for (int j = 0; j < SubSublistaIntestino->GetTam(); j++){
			for (int k = 0; k < SubSublistaIntestino->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (SubSublistaIntestino->lista[k]->Prioridad > SubSublistaIntestino->lista[k + 1]->Prioridad){
					aux = SubSublistaIntestino->lista[k];
					SubSublistaIntestino->lista[k] = SubSublistaIntestino->lista[k + 1];//lista ordenada creo
					SubSublistaIntestino->lista[k + 1] = aux;
					cReceptor* pacienteelegido = SubSublistaIntestino->lista[0];
					return pacienteelegido; //retornamos paciente!!!
				}
			}
		}
	}//creo que ahi funciona	
}
void cIncucai::recibir_paciente(cPaciente* _paciente) {
	cDonante* Donante_Aux = nullptr;
	Donante_Aux = dynamic_cast<cDonante*>(_paciente);
	cReceptor* Receptor_Aux = nullptr;
	Receptor_Aux = dynamic_cast<cReceptor*>(_paciente);
	if (Donante_Aux != nullptr){
		(*ListaDonante) + (Donante_Aux);
		Buscar_Posibles_Receptores(Donante_Aux);
	}
	else{
		(*ListaReceptor) + (Receptor_Aux);
		//buscar coincidencia con el receptor
	}
}
void cIncucai::Buscar_Posibles_Receptores(cDonante* _donante)
{
	for (int i = 0; i < _donante->listaorganos->ca; i++) {
		for (int j = 0; j < ListaReceptor->GetTam(); j++){
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 0) && ((_donante->listaorganos->lista[i]->tipo_organo) == 0)){
				(*SubListaReceptores_Corazon) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 1) && ((_donante->listaorganos->lista[i]->tipo_organo) == 1)){
				(*SubListaReceptores_Rinion) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 2) && ((_donante->listaorganos->lista[i]->tipo_organo) == 2)){
				(*SubListaReceptores_Pulmones) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 3) && ((_donante->listaorganos->lista[i]->tipo_organo) == 3)){
				(*SubListaReceptores_Higado) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 4) && ((_donante->listaorganos->lista[i]->tipo_organo) == 4)){
				(*SubListaReceptores_Pancreas) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 5) && ((_donante->listaorganos->lista[i]->tipo_organo) == 5)){
				(*SubListaReceptores_Huesos) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 6) && ((_donante->listaorganos->lista[i]->tipo_organo) == 6)){
				(*SubListaReceptores_Intestino) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 7) && ((_donante->listaorganos->lista[i]->tipo_organo) == 7)){
				(*SubListaReceptores_Piel) + (ListaReceptor->lista[j]);
			}
			if (((ListaReceptor->lista[j]->Organo->tipo_organo) == 8) && ((_donante->listaorganos->lista[i]->tipo_organo) == 8)){
				(*SubListaReceptores_Corneas) + (ListaReceptor->lista[j]);
			}
		}
    }
}
bool cIncucai::trasporte_transplante(cDonante* _donante)
{
	return false;
}




