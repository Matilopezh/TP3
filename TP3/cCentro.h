#include <iostream>
#include <string>
using namespace std;

class cReceptor;
class cDonante;

class cCentro
{

	public:
		cCentro(string _Direccion, string _Nombre, string _Partido, string _Provincia, unsigned int _Telefono);
		virtual ~cCentro();

		bool ablacion(cDonante* Donante);
		bool asignar_vehiculos(cReceptor* Receptor, cDonante* Donante);
		void transplante();

	private:
		//cLista_vehiculos* cLista_vehiculos;
		string Direccion;
		string Nombre;
		string Partido;
		string Provincia;
		unsigned int Telefono;

};

