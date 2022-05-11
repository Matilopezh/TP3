
#include <iostream>
#include <string>
#include "lista.h"
using namespace std;
//template <class t>
  cLista :: ~cLista(){}
  cLista::cLista( int _tam) {

	  ca = 0;
	  tam = _tam;
	  lista = new t * [tam];
	  for (unsigned int i = 0; i < tam; i++)
	  {
		  lista[i] = nullptr;
	  }

  }
  t cLista::buscar(t* datobuscar)
  {
	  t aux;
	  for (int i = 0;i < ca; i++)
	  {
		  if (lista[i].codigo == datobuscar.codigo)
		  {
			  return lista[i];
		  }
	  }
  }
