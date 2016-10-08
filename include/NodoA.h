#include <iostream>
#include <vector>

class NodoA
{
public:
	 Puzzel;
	std::vector<NodoA*> Hijos; //esto es un vector con nodos
	NodoA * Padre;
	NodoA( int pzl);
	NodoA(int pzl , NodoA* padre);
};
