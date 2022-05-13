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
	cLista( int _tam);
	~cLista();
	t* operator[](t* datobuscar);
	void operator+(t* datoagregar);
	void operator-(t* datoeliminar);
	void filtrar(t* listadonantes, t* listareceptores);
	int GetTam();

};

