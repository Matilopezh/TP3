#include <iostream>
#include <ctime>

using namespace std;

class cFecha
{
private:
#pragma region Atributos

	tm fecha;

#pragma endregion	

#pragma region Constructor y Destructor

public:
	
	//Constructor inicializa fecha de cumpleaños
	cFecha(int d, int m, int a);

	~cFecha();

#pragma endregion

#pragma region Metodos

	//Calcula el numero de días entre dos fechas
	static int DiasEntreFechas(cFecha* inicio, cFecha* fin);


	//Cambia la fecha a la fecha actual
	void SetNow();

	//Verifica que la fecha esté completa
	bool FechaCompleta();

	//Devuelve la fecha actual en forma de string
	string To_string();

	// Imprime fecha
	void ImprimirFecha();

	// Determina si las dos fechas tiene el mismo dia
	static bool MismoDia(cFecha* fecha1, cFecha* fecha2);

#pragma endregion

#pragma region Sobrecarga de Operadores

	bool operator<(cFecha& otra) {
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this < aux_otra;
	}

	bool operator>(cFecha& otra) {
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this > aux_otra;
	}

	bool operator==(cFecha& otra) {
		time_t aux_this = mktime(&(this->fecha));
		time_t aux_otra = mktime(&(otra.fecha));
		return aux_this == aux_otra;
	}

	bool operator!=(cFecha& otra) {
		return !(*this == otra);
	}

#pragma endregion
};