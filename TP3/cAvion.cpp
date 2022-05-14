
#include "cAvion.h"
#include <iostream>
#include <string>
#include <sstream>

cAvion::cAvion(){

}



cAvion::~cAvion(){

}


void cAvion::Imprimir() {
	cout << to_String() << endl;
}

string cAvion::to_String() {
	stringstream ss;
	ss << "zhooooooom " << endl;
	ss << "“El avión llegó a destino " << endl;
	return ss.str();
}

bool cAvion::Transporte(cOrgano* Organo, cCentro* Centro){

	return false;
}







