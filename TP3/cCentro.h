#include <iostream>
#include <string>
#include "lista.h"
using namespace std;

class cDonante;


class cCentro
{

	public:
		cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono);
		virtual ~cCentro();

		bool ablacion(cDonante* Donante);
		bool asignar_vehiculos(cDonante* Donante);
		void transplante();

	private:
		//cLista<cVehiculos>* listavehiculos;
		friend class cReceptor;
		string Direccion;
		string Nombre;
		string Partido;
		string Provincia;
		unsigned int Telefono;

};

