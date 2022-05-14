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





cPaciente* cIncucai::elegir_receptor(cPaciente* _paciente){

	return  NULL;
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
		ListaReceptor->operator+(Receptor_Aux);
	}
}

bool cIncucai::Buscar_Posibles_Receptores(cDonante* _donante)
{
	
		
		
		
		
		
	
}

bool cIncucai::trasporte_transplante(cDonante* _donante){

	return false;
}




