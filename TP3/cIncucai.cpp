#include "cIncucai.h"
#include "cReceptor.h"
#include "cDonante.h"
#include "cPaciente.h"
#include "lista.h"
#include "cFecha.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#define Tam 10

class cOrgano;
class cDonante;

cIncucai::cIncucai(){
	 paciente = nullptr;
	 
	 ListaDonantes; 
	 
}

cIncucai::~cIncucai(){}//no olvidar hacer el destructor de las listas!!!!!!

void cIncucai::elegir_receptor()
{
	//algo huele mal aqui
	if (listaReceptores.SubListaReceptores_Corazon != NULL)
	{
		for (int j = 0; j < listaReceptores.SubListaReceptores_Corazon->GetTam(); j++) {
			for (int k = 0; k < listaReceptores.SubListaReceptores_Corazon->GetTam(); k++) {
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Corazon->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Corazon->lista[k + 1]->Prioridad) {
					aux = listaReceptores.SubListaReceptores_Corazon->lista[k];
					listaReceptores.SubListaReceptores_Corazon->lista[k] = listaReceptores.SubListaReceptores_Corazon->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Corazon->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles)+ (listaReceptores.SubListaReceptores_Corazon->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Corneas != NULL)
	{
		for (int j = 0; j < (listaReceptores.SubListaReceptores_Corneas->GetTam()); j++) {
			for (int k = 0; k < (listaReceptores.SubListaReceptores_Corneas->GetTam()); k++) {
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Corneas->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Corneas->lista[k + 1]->Prioridad) {
					aux = listaReceptores.SubListaReceptores_Corneas->lista[k];
					listaReceptores.SubListaReceptores_Corneas->lista[k] = listaReceptores.SubListaReceptores_Corneas->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Corneas->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Corneas->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Pulmones != NULL) {

		for (int j = 0; j < listaReceptores.SubListaReceptores_Pulmones->GetTam(); j++) {
			for (int k = 0; k < listaReceptores.SubListaReceptores_Pulmones->GetTam(); k++) {
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Pulmones->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Pulmones->lista[k + 1]->Prioridad) {
					aux = listaReceptores.SubListaReceptores_Pulmones->lista[k];
					listaReceptores.SubListaReceptores_Pulmones->lista[k] = listaReceptores.SubListaReceptores_Pulmones->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Pulmones->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Pulmones->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Piel != NULL)
	{
	
		for (int j = 0; j < listaReceptores.SubListaReceptores_Piel->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Piel->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Piel->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Piel->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Piel->lista[k];
					listaReceptores.SubListaReceptores_Piel->lista[k] = listaReceptores.SubListaReceptores_Piel->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Piel->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Piel->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Higado != NULL)
	{
		
		for (int j = 0; j < listaReceptores.SubListaReceptores_Higado->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Higado->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Higado->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Higado->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Higado->lista[k];
					listaReceptores.SubListaReceptores_Higado->lista[k] = listaReceptores.SubListaReceptores_Higado->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Higado->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Higado->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Rinion != NULL)
	{
		for (int j = 0; j < listaReceptores.SubListaReceptores_Rinion->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Rinion->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Rinion->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Rinion->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Rinion->lista[k];
					listaReceptores.SubListaReceptores_Rinion->lista[k] = listaReceptores.SubListaReceptores_Rinion->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Rinion->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Rinion->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Pancreas != NULL)
	{
		for (int j = 0; j < listaReceptores.SubListaReceptores_Pancreas->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Pancreas->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Pancreas->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Pancreas->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Pancreas->lista[k];
					listaReceptores.SubListaReceptores_Pancreas->lista[k] = listaReceptores.SubListaReceptores_Pancreas->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Pancreas->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Pancreas->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Huesos != NULL)
	{
		for (int j = 0; j < listaReceptores.SubListaReceptores_Huesos->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Huesos->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Huesos->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Huesos->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Huesos->lista[k];
					listaReceptores.SubListaReceptores_Huesos->lista[k] = listaReceptores.SubListaReceptores_Huesos->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Huesos->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Huesos->lista[0]);
				}
			}
		}
	}
	if (listaReceptores.SubListaReceptores_Intestino != NULL)
	{
		for (int j = 0; j < listaReceptores.SubListaReceptores_Intestino->GetTam(); j++){
			for (int k = 0; k < listaReceptores.SubListaReceptores_Intestino->GetTam(); k++){
				cReceptor* aux = nullptr;
				if (listaReceptores.SubListaReceptores_Intestino->lista[k]->Prioridad > listaReceptores.SubListaReceptores_Intestino->lista[k + 1]->Prioridad){
					aux = listaReceptores.SubListaReceptores_Intestino->lista[k];
					listaReceptores.SubListaReceptores_Intestino->lista[k] = listaReceptores.SubListaReceptores_Intestino->lista[k + 1];//lista ordenada creo
					listaReceptores.SubListaReceptores_Intestino->lista[k + 1] = aux;
					(*listaReceptores.SubListaReceptores_Compatibles) + (listaReceptores.SubListaReceptores_Intestino->lista[0]);
				}
			}
		}
	}
}

void cIncucai::ingresar_paciente(cPaciente* _paciente)
{
	cDonante* Donante_Aux = nullptr;
	Donante_Aux = dynamic_cast<cDonante*>(_paciente);

	cReceptor* Receptor_Aux = nullptr;
	Receptor_Aux = dynamic_cast<cReceptor*>(_paciente);

	if (Donante_Aux != nullptr) {
		(*ListaDonantes) + (Donante_Aux);
		Buscar_Posibles_Receptores(Donante_Aux);
	}
	else if (Receptor_Aux != nullptr) {
		(*Lista_Receptores) + (Receptor_Aux);
	}
}

void cIncucai::recibir_paciente(cPaciente* _paciente) {
	ingresar_paciente(_paciente);
}

void cIncucai::Buscar_Posibles_Receptores(cDonante* _donante){

	for (int i = 0; i < Lista_Receptores->ca; i++) {
		if (Lista_Receptores->lista[i]->Tipo_sangre == _donante->Tipo_sangre) {
			for (int j = 0; j < _donante->lista_organos->ca;j++) {
				if (Lista_Receptores->lista[i]->GetTipoOrgano() == _donante->lista_organos->lista[i]->GetTipoOrgano()) {
					switch (Lista_Receptores->lista[i]->GetTipoOrgano()) {
					case 0://Corazon
						(*listaReceptores.SubListaReceptores_Corazon) + (Lista_Receptores->lista[i]);
						break;
					case 1://Rinion
						(*listaReceptores.SubListaReceptores_Rinion) + (Lista_Receptores->lista[i]);
						break;
					case 2://Pulmon
						(*listaReceptores.SubListaReceptores_Pulmones) + (Lista_Receptores->lista[i]);
						break;
					case 3://Higado
						(*listaReceptores.SubListaReceptores_Higado) + (Lista_Receptores->lista[i]);
						break;
					case 4://Pancreas 
						(*listaReceptores.SubListaReceptores_Pancreas) + (Lista_Receptores->lista[i]);
						break;
					case 5://Hueso
						(*listaReceptores.SubListaReceptores_Huesos) + (Lista_Receptores->lista[i]);
						break;
					case 6://Intestino
						(*listaReceptores.SubListaReceptores_Intestino) + (Lista_Receptores->lista[i]);
						break;
					case 7://Piel
						(*listaReceptores.SubListaReceptores_Piel) + (Lista_Receptores->lista[i]);
						break;
					case 8://Corneas
						(*listaReceptores.SubListaReceptores_Corneas) + (Lista_Receptores->lista[i]);
						break;
					}
				}
			}
		}
	}
	elegir_receptor();
	
}

void cIncucai::trasporte_transplante(cDonante* _donante, cReceptor* Receptor)
{
	for (int h = 0; h < listaReceptores.SubListaReceptores_Compatibles->GetTam(); h++) {
		//cVehiculo* vehiculo = _donante->Centro_Salud->asignar_vehiculos(listaReceptores.SubListaReceptores_Compatibles->lista[h], _donante);

		_donante->Centro_Salud->ablacion(_donante, Receptor->GetTipoOrgano());

		//vehiculo->Imprimir(); //esto es el "transporte"

		int exito = _donante->Centro_Salud->transplante(listaReceptores.SubListaReceptores_Compatibles->lista[h]);

		if (exito == 0) {
			listaReceptores.SubListaReceptores_Compatibles->lista[h]->estadoreceptor = Inestable;
			listaReceptores.SubListaReceptores_Compatibles->lista[h]->Prioridad = 1;
		}
		if (exito == 1) {
			//eliminar Receptor de la lista
		}
	}
	
}




