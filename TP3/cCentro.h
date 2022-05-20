#include <iostream>
#include <string>
#include "lista.h"
#include "cVehiculo.h"

using namespace std;

class cDonante;
class cReceptor;


class cCentro
{

	public:
		cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono);
		virtual ~cCentro();

		bool ablacion(cDonante* Donante);
		cVehiculo* asignar_vehiculos(cReceptor* Receptor,cDonante* Donante);
		int transplante(cReceptor* Receptor);

	private:
		cLista<cVehiculo>* listavehiculos;
		friend class cReceptor;
		friend class cDonante;
		string Direccion;
		string Nombre;
		string Partido;
		string Provincia;
		unsigned int Telefono;

};

