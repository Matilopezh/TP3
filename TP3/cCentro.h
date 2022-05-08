

class cCentro
{

public:
	cCentro();
	virtual ~cCentro();

	bool ablacion();
	bool asignar_vehiculos();
	void transplante();

private:
	cLista_vehiculos cLista_vehiculos*;
	String Direccion;
	String Nombre;
	String Partido;
	String Provincia;
	String Telefono;

};

