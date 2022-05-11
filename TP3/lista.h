#pragma once
#include <iostream>
template <class t>
class cLista
{
private:
	int ca;
	int tam;
	t** lista;
public:
	cLista(int _ca, int _tam);
	~cLista();
	t buscar(t* datobuscar);
	void agregar(t* datoagregar);
	/oid eliminar(t* datoeliminar);
	t* filtrar(t* listabuscar);

};

