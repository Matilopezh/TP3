
#include "cHelicoptero.h"
#include <iostream>
#include <string>
#include <sstream>

cHelicoptero::cHelicoptero(){

}



cHelicoptero::~cHelicoptero(){

}


void cHelicoptero::Imprimir() {
	cout << to_String() << endl;
}

string cHelicoptero::to_String() {
	stringstream ss;
	ss << "taca taca taca " << endl;
	ss << "“El Helicoptero llegó a destino " << endl;
	return ss.str();
}

