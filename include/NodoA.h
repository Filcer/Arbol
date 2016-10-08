#include <iostream>
#include <vector>

class NodoA
{
public:
	int dato;
	std::vector<NodoA*> Hijos; //esto es un vector con nodos
	NodoA* Padre;
	NodoA(int dato);
	NodoA(int dato , NodoA* padre);
};
