#include <iostream>
#include <string>
using namespace std;

class cCentro
{

public:
	cCentro();
	virtual ~cCentro();

	bool ablacion();
	bool asignar_vehiculos();
	void transplante();

private:
	cLista_vehiculos* cLista_vehiculos;
	string Direccion;
	string Nombre;
	string Partido;
	string Provincia;
	string Telefono;

};

