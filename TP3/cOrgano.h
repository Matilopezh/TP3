#include <iostream>
#include <string>
using namespace std; 
class cOrgano
{

public:
	cOrgano();
	virtual ~cOrgano();

private:
	string fecha_ablacion;
	enum Tipo { CORAZON, RINION, PULMON, HIGADO, PANCREAS, HUESO, INTESTINO, PIEL, CORNEAS };
	friend class cIncucai;
};
