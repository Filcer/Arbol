#include <stack>
#include "NodoA.h"

class ArbolP
{
private:
	NodoA* BusqRec(int ref, NodoA* aux);
public:
	NodoA* Raiz;
	ArbolP(int orig);
	NodoA* BusqNodo(int v);
	bool AddNodo(int ref, int aux);
	bool ElimNodo(int ref);
	std::stack<NodoA*> Camino(NodoA* aux);

};