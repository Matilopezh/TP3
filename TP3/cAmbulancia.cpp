#include <iostream>
#include "cAmbulancia.h"
#include <string>
#include <sstream>

cAmbulancia::cAmbulancia(){

}

cAmbulancia::~cAmbulancia(){

}


void cAmbulancia::Imprimir(){
	cout << to_String() << endl;
}

string cAmbulancia::to_String() {
	stringstream ss;
	ss << "“iuiuiuiuiu "  << endl; 
	ss << "“La ambulancia llego  a destino" << endl;
	return ss.str();
}
