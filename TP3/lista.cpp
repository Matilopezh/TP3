
#include <iostream>
#include <string>
#include "lista.h"
using namespace std;
template <class t>
  cLista<t> :: ~cLista()
  {
	  for (int i = 0; i < tam; i++)
	  {
		  delete lista[i];
	  }
	  delete[] lista;
  }
  template <class t>
  cLista<t>::cLista( int _tam) {

	  ca = 0;
	  tam = _tam;
	  lista = new t * [tam];
	  for (unsigned int i = 0; i < tam; i++)
	  {
		  lista[i] = nullptr;
	  }

  }
  template <class t>
  int cLista<t>::GetTam() {
	  return ca;
  }
  template <class t>
 t*  cLista<t>::operator[](t* datobuscar)
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
 template <class t>
 void cLista<t>::operator+(t* datoagregar)
 {
   
	 if (ca >= tam)
	 {
		 throw new exception("No hay tamaño suficiente para agregar el item");
	 }
	 else
	 {
		 lista[ca] = datoagregar;
		 ca++;
	 }
 }
 template <class t>
 void cLista<t>:: operator-(t* datoeliminar)
 {
	 if (lista[ca] == datoeliminar)
	 {
		 lista[ca] == nullptr;
		 ca--;
	 }
	 else
	 for(int i = 0; i < ca - 1; i++)
	 {
		 if (lista[i] == datoeliminar)
		 {
			 return i;
		 }
	 }
	 for (int j = i; j < ca - 1; j++)
	 {
		 
		 lista[j] = lista[j + 1];

		 ca--;
	 }
 }
 template<class t>
 void cLista<t>::filtrar(t* listadonantes, t* listareceptores)
 {
	 //falta verificar que se puedan agregar organos, sino hacer dinamicas las listas y que se redefinan 
	 int j = 0, k = 0;
	 for (int i = 0; i < ca; i++)
	 {
		 if (lista[i] == lista[i]) {//si es donante
			 listadonantes[k] = lista[i];
			 k++;
		 }
		 else {
			 listareceptores[j] = lista[i];
			 j++;
		 }
	 }
 }
